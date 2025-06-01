#ifndef _RKLLM_INTERNAL_H_
#define _RKLLM_INTERNAL_H_

#include "rkllm.h"
#include <pthread.h>
#include <stdint.h>
#include <stdbool.h>

// Forward declarations for GGML types (we'll implement these in our simplified version)
typedef struct ggml_context ggml_context;
typedef struct ggml_tensor ggml_tensor;

// Model context structure (estimated from analysis)
typedef struct {
    ggml_context* ggml_ctx;           // GGML context
    ggml_tensor* model_tensors;       // Model weights
    char* model_path;                 // Path to model file
    void* tokenizer;                  // Tokenizer instance
    LLMResultCallback result_callback; // Result callback
    bool is_running;                  // Flag to indicate if inference is running
    pthread_mutex_t mutex;            // Mutex for thread safety
    pthread_t worker_thread;          // Worker thread for async operations
    
    // KV cache
    void* kv_cache;                   // Key-value cache
    int kv_cache_size;                // Size of KV cache
    
    // Generation parameters
    int max_tokens;                   // Maximum tokens to generate
    float temperature;                // Temperature for sampling
    float top_p;                      // Top-p sampling parameter
    int top_k;                        // Top-k sampling parameter
    
    // Chat template
    char* system_prompt;              // System prompt
    char* prompt_prefix;              // Prompt prefix
    char* prompt_postfix;             // Prompt postfix
    
    // LoRA adapters
    void* lora_adapters;              // LoRA adapters
    int num_lora_adapters;            // Number of LoRA adapters
} RKLLMContext;

// Internal function declarations
int initialize_context(RKLLMContext* ctx, RKLLMParam* param, LLMResultCallback callback);
void cleanup_context(RKLLMContext* ctx);
int load_model(RKLLMContext* ctx, const char* model_path);
void* inference_thread(void* arg);

// GGML wrapper functions
ggml_context* ggml_init(size_t mem_size);
void ggml_free(ggml_context* ctx);
ggml_tensor* ggml_new_tensor(ggml_context* ctx, int type, int n_dims, int* dims);

#endif // _RKLLM_INTERNAL_H_
