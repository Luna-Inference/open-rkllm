# Analysis Report: librkllmrt.so

## Executive Summary

This document analyzes the decompiled code of `librkllmrt.so`, a shared library for Rockchip Neural Processing Units (NPUs) that appears to be designed for running large language models (LLMs). The library is designed for ARM aarch64 architecture and contains a C/C++ API for initializing, loading, and running language models on Rockchip hardware. Our analysis has revealed that the library is built on top of GGML (General-purpose GPU/CPU/TPU Machine Learning), a tensor library designed for efficient LLM inference on resource-constrained devices.

## 1. Library Identification

- **Library Name**: `librkllmrt.so`
- **Architecture**: ELF 64-bit LSB shared object, ARM aarch64
- **Version**: 1 (SYSV), dynamically linked, stripped
- **Purpose**: Runtime library for language model inference on Rockchip NPUs

## 2. Core API Structure

The library exposes several key functions for interacting with language models:

### 2.1 Core Functions

| Function | Signature | Purpose |
|----------|-----------|---------|
| `rkllm_init` | `int rkllm_init(undefined8 *param_1, undefined8 param_2, undefined8 param_3)` | Initializes the library and creates a model context |
| `rkllm_destroy` | `undefined8 rkllm_destroy(void *param_1)` | Cleans up and frees resources |
| `rkllm_load_lora` | `undefined8 rkllm_load_lora(long param_1)` | Loads LoRA adapters (fine-tuning parameters) |
| `rkllm_run` | `undefined8 rkllm_run(long param_1)` | Runs inference synchronously |
| `rkllm_run_async` | `undefined8 rkllm_run_async(long param_1)` | Runs inference asynchronously |
| `rkllm_is_running` | `undefined8 rkllm_is_running(long param_1)` | Checks if the model is currently running |
| `rkllm_abort` | `undefined8 rkllm_abort(long param_1)` | Aborts an ongoing inference |
| `rkllm_clear_kv_cache` | `undefined8 rkllm_clear_kv_cache(long param_1)` | Clears the key-value cache |
| `rkllm_set_chat_template` | `undefined8 rkllm_set_chat_template(long param_1)` | Sets a chat template for formatting conversations |
| `rkllm_createDefaultParam` | `void rkllm_createDefaultParam(undefined8 *param_1)` | Creates default parameters for model inference |
| `rkllm_load_prompt_cache` | `undefined8 rkllm_load_prompt_cache(long param_1)` | Loads a prompt cache for faster inference |
| `rkllm_release_prompt_cache` | `undefined8 rkllm_release_prompt_cache(long param_1)` | Releases a previously loaded prompt cache |
| `rkllm_accuracy_analysis` | `undefined8 rkllm_accuracy_analysis(long param_1)` | Performs accuracy analysis on model outputs |

### 2.2 Function Implementation Pattern

Most functions follow a similar pattern:
1. Check if the input pointer is non-null
2. Call an internal implementation function (e.g., `FUN_001bdf40`)
3. Return the result or `0xffffffff` (-1) on error

## 3. Memory Management

The library uses a combination of C++ and C memory management:
- `operator_new` and `operator_delete` for C++ object allocation and destruction
- `memset` for initializing memory regions
- Error checking with non-zero return values

## 4. Hardware Target

Based on strings and function signatures, the library targets specific Rockchip platforms:
- RK3588
- RK3576
- RV1126B
- RK3562

The library contains platform-specific code and optimizations, as evidenced by strings like:
```
Platform error, must be either RK3588, RK3576, RV1126B or RK3562. Your platform is %s
```

## 5. Language Model Features

The library appears to support several advanced LLM features:

- **KV Caching**: Key-value caching for faster inference through `rkllm_clear_kv_cache`
- **LoRA Fine-tuning**: Loading of LoRA adapters through `rkllm_load_lora`
- **Chat Templates**: Setting of chat formatting templates through `rkllm_set_chat_template`
- **Asynchronous Execution**: Non-blocking inference through `rkllm_run_async`
- **Prompt Caching**: Optimization for repeated prompts through `rkllm_load_prompt_cache`

## 6. Implementation Details

### 6.1 Initialization

The `rkllm_init` function:
1. Allocates a 0x248 (584) byte structure
2. Initializes it with zeros
3. Calls initialization functions (`FUN_001ba3c0`, `FUN_001bbb20`)
4. Returns a handle to this structure on success

```c
int rkllm_init(undefined8 *param_1,undefined8 param_2,undefined8 param_3) {
  int iVar1;
  void *__s;
  
  __s = operator_new(0x248);
  memset(__s,0,0x248);
  FUN_001ba3c0(__s);
  iVar1 = FUN_001bbb20(__s,param_2,param_3);
  if (iVar1 == 0) {
    *param_1 = __s;
    return 0;
  }
  FUN_001bb5a0(__s);
  operator_delete(__s);
  return iVar1;
}
```

### 6.2 Default Parameters

The `rkllm_createDefaultParam` function sets up default parameters for model inference:
- Threading configuration based on system capabilities
- Default values for model configuration 
- CPU core detection using `sysconf`

### 6.3 Multithreading

The library uses multithreading capabilities:
- OpenMP parallel execution through `GOMP_*` functions
- POSIX threads (pthread) for asynchronous operations
- CPU affinity management functions

## 7. Dependencies

The library depends on several standard libraries:

- **C++ Standard Library**: Heavy use of C++ features like streams, strings, etc.
- **POSIX Threads**: For multithreading support
- **C Standard Library**: Core C functions for memory management, file I/O
- **OpenMP**: For parallel execution
- **Dynamic Linking**: Uses `dlopen`/`dlsym` for runtime loading of dependencies
- **GGML**: Uses the GGML tensor library for efficient LLM inference operations

## 8. Recompilation Strategy

To successfully recompile this library into working code:

### 8.1 Prerequisites

1. **ARM aarch64 Compiler Toolchain**: The library is compiled for ARM aarch64
2. **Rockchip NPU SDK**: Required for platform-specific functions
3. **C++11 or later Compiler**: The library uses C++11 features

### 8.2 Source Structure

Create a structure with the following files:

1. **rkllm.h**: Public header defining the API
2. **rkllm_internal.h**: Internal structures and functions
3. **rkllm_core.cpp**: Core implementation
4. **rkllm_model.cpp**: Model loading and management
5. **rkllm_inference.cpp**: Inference implementation

### 8.3 API Implementation

1. Implement a clean wrapper around the identified API functions
2. Define proper parameter structures instead of using `undefined8` types
3. Create a model context structure matching the 0x248-byte allocation

### 8.4 Platform Detection

Implement platform detection for Rockchip NPUs, as seen in strings:

```c
// Sample platform detection code
const char* detect_platform() {
    // Implementation needed
    return "RK3588"; // Or other supported platform
}

bool validate_platform(const char* platform) {
    return (strcmp(platform, "RK3588") == 0 ||
            strcmp(platform, "RK3576") == 0 ||
            strcmp(platform, "RV1126B") == 0 ||
            strcmp(platform, "RK3562") == 0);
}
```

### 8.5 Build System

Set up a CMake or Makefile build system with:
- Proper linking to required dependencies
- Target architecture settings for aarch64
- Inclusion of Rockchip NPU SDK
- C++11 or later standard

## 9. GGML Integration

A key discovery in our analysis is the presence of `libggml-cpu.c` and `libggml-cpu.h` files alongside the `librkllmrt` files. GGML (General-purpose GPU/CPU/TPU Machine Learning) is a tensor library designed for efficient LLM inference on resource-constrained devices, most famously used in projects like llama.cpp.

The relationship between librkllmrt and GGML appears to be as follows:

1. **GGML as Computational Backend**: librkllmrt likely uses GGML for the core tensor operations required for LLM inference
2. **Hardware Acceleration**: The Rockchip-specific code in librkllmrt probably provides NPU (Neural Processing Unit) acceleration for GGML operations
3. **API Wrapper**: The rkllm API provides a clean, high-level interface around the GGML computational core

### GGML-Specific Functions

The GGML file contains numerous functions for tensor operations optimized for ARM aarch64 architecture, including:

- Matrix multiplication: `ggml_gemm_*` functions for various quantization levels
- Tensor operations: `ggml_compute_forward_*` functions for various neural network layers
- CPU feature detection: Functions like `ggml_cpu_has_avx512`, `ggml_cpu_has_avx512_vbmi`
- Memory management: Functions for allocating and managing tensors

These functions provide the foundation for efficient LLM inference that librkllmrt builds upon.

## 10. Clean API Structure

The project includes a clean `rkllm.h` header file that defines a well-structured API for interacting with the library. This is likely the original API design document or a reconstructed API based on the decompiled code.

### API Design

The API is designed around the following key components:

1. **Handle-based Architecture**: Uses an opaque `LLMHandle` type to manage model instances
2. **Parameter Structures**: Well-defined structures for model parameters and configurations:
   - `RKLLMParam`: Core model configuration (model path, context length, generation parameters)
   - `RKLLMExtendParam`: Extended configuration for CPU affinity and specific hardware features
   - `RKLLMLoraAdapter`: Configuration for LoRA fine-tuning
   - `RKLLMInferParam`: Parameters for controlling inference behavior

3. **Input Flexibility**: Supports multiple input types through the `RKLLMInput` union:
   - Text prompts
   - Token IDs
   - Embedding vectors
   - Multimodal inputs (text + images)

4. **Callback-based Output**: Uses callback functions (`LLMResultCallback`) to handle model outputs

5. **Asynchronous Operation**: Supports both synchronous (`rkllm_run`) and asynchronous (`rkllm_run_async`) execution

### Notable API Features

- **Chat Templates**: Custom chat formatting via `rkllm_set_chat_template`
- **KV Cache Management**: Control over the key-value cache with `rkllm_clear_kv_cache`
- **LoRA Support**: Loading of LoRA adapters for model fine-tuning
- **Prompt Caching**: Optimization for repeated prompts via cache management functions
- **Multimodal Support**: Structures for handling combined text and image inputs

The clean API design suggests this library was professionally developed as a commercial product for Rockchip NPU hardware acceleration of LLM inference.

## 11. Next Steps

1. **Complete Function Signatures**: Determine proper types for all parameters
2. **Internal Data Structures**: Reverse-engineer the model context structure
3. **Platform SDK**: Identify the required Rockchip NPU SDK version
4. **Test Harness**: Create a minimal test program to validate functionality

## Conclusion

The `librkllmrt.so` library provides a C/C++ API for running language models on Rockchip NPUs, built on top of the GGML tensor computation library. Our analysis reveals several key insights:

1. **Architecture**: The library follows a layered architecture with:
   - A high-level RKLLM API for application developers (defined in `rkllm.h`)
   - An implementation layer in `librkllmrt.c/h` that connects the API to GGML
   - GGML tensor computation layer in `libggml-cpu.c/h` optimized for ARM aarch64

2. **Integration**: The library integrates GGML's efficient tensor operations with Rockchip-specific NPU accelerations

3. **Advanced Features**: Support for:
   - Quantization (various precision levels through GGML)
   - LoRA fine-tuning
   - Asynchronous inference 
   - Multimodal inputs
   - Key-value cache management
   - Prompt caching

### Recompilation Recommendation

Our recommended approach for recompiling this library:

1. **Use Original Headers**: The presence of a clean `rkllm.h` file provides the API structure
2. **Integrate GGML**: Use an up-to-date version of GGML (such as from llama.cpp)
3. **Implement Bridge Layer**: Create a bridge between the RKLLM API and GGML 
4. **Add Platform-Specific Code**: Implement the Rockchip NPU acceleration portions using the Rockchip SDK
5. **Implement Memory Management**: Follow the patterns observed in the decompiled code

With the clear API structure defined in `rkllm.h` and understanding of the GGML integration, recompilation should be feasible even without a complete understanding of every implementation detail in the decompiled files.