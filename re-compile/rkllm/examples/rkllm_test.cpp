#include "rkllm.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
#include <thread>
#include <chrono>

// Result callback function
void result_callback(RKLLMResult* result, void* userdata, LLMCallState state) {
    switch (state) {
        case RKLLM_RUN_NORMAL:
            printf("%s", result->text);
            fflush(stdout);
            break;
        case RKLLM_RUN_WAITING:
            printf("Waiting for UTF-8 completion...\n");
            break;
        case RKLLM_RUN_FINISH:
            printf("\nGeneration complete.\n");
            break;
        case RKLLM_RUN_ERROR:
            printf("\nError occurred during generation.\n");
            break;
    }
}

int main(int argc, char** argv) {
    LLMHandle handle;
    int ret;
    
    // Parse command line arguments
    const char* model_path = "dummy_model.bin";
    if (argc > 1) {
        model_path = argv[1];
    }
    
    // Create default parameters
    RKLLMParam params = rkllm_createDefaultParam();
    params.model_path = model_path;
    params.max_new_tokens = 20;
    params.temperature = 0.7f;
    
    printf("Initializing model from: %s\n", params.model_path);
    
    // Initialize the model
    ret = rkllm_init(&handle, &params, result_callback);
    if (ret != 0) {
        printf("Failed to initialize model: %d\n", ret);
        return 1;
    }
    
    printf("Model initialized successfully.\n");
    
    // Set chat template
    const char* system_prompt = "You are a helpful assistant.";
    const char* prefix = "User: ";
    const char* postfix = "\nAssistant: ";
    
    ret = rkllm_set_chat_template(handle, system_prompt, prefix, postfix);
    if (ret != 0) {
        printf("Failed to set chat template: %d\n", ret);
        rkllm_destroy(handle);
        return 1;
    }
    
    printf("Chat template set successfully.\n");
    
    // Create input
    RKLLMInput input;
    input.input_type = RKLLM_INPUT_PROMPT;
    input.prompt_input = "Hello, how are you today?";
    
    // Create inference parameters
    RKLLMInferParam infer_params = {0};
    infer_params.mode = RKLLM_INFER_GENERATE;
    infer_params.keep_history = 1;
    
    printf("Running inference with prompt: %s\n", input.prompt_input);
    
    // Run inference
    ret = rkllm_run(handle, &input, &infer_params, NULL);
    if (ret != 0) {
        printf("Inference failed: %d\n", ret);
        rkllm_destroy(handle);
        return 1;
    }
    
    printf("\nInference completed.\n");
    
    // Try with a different prompt
    input.prompt_input = "What is the capital of France?";
    printf("\nRunning inference asynchronously with prompt: %s\n", input.prompt_input);
    
    // Run inference asynchronously
    ret = rkllm_run_async(handle, &input, &infer_params, NULL);
    if (ret != 0) {
        printf("Async inference failed: %d\n", ret);
        rkllm_destroy(handle);
        return 1;
    }
    
    // Wait for a bit
    printf("Waiting for async inference to complete...\n");
    for (int i = 0; i < 5; i++) {
        printf(".");
        fflush(stdout);
        
        // Sleep for 2 seconds to see some async output
        std::this_thread::sleep_for(std::chrono::seconds(2));
    }
    printf("\n");
    
    // Check if still running
    ret = rkllm_is_running(handle);
    if (ret == 0) {
        printf("Model is still running, aborting...\n");
        rkllm_abort(handle);
    } else {
        printf("Model is not running.\n");
    }
    
    // Clean up
    printf("Destroying model...\n");
    rkllm_destroy(handle);
    printf("Model destroyed successfully.\n");
    
    return 0;
}
