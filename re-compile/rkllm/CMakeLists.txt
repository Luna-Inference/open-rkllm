cmake_minimum_required(VERSION 3.10)
project(rkllm VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Find required packages
find_package(Threads REQUIRED)

# Library source files
set(RKLLM_SOURCES
    src/rkllm_core.cpp
)

# Library includes
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Build the shared library
add_library(rkllm SHARED ${RKLLM_SOURCES})

# Link libraries
target_link_libraries(rkllm
    PRIVATE
    Threads::Threads
)

# Set library properties
set_target_properties(rkllm PROPERTIES
    VERSION ${PROJECT_VERSION}
    SOVERSION ${PROJECT_VERSION_MAJOR}
    PUBLIC_HEADER "include/rkllm.h"
)

# Install targets
install(TARGETS rkllm
    LIBRARY DESTINATION lib
    PUBLIC_HEADER DESTINATION include
)

# Test executable
add_executable(rkllm_test examples/rkllm_test.cpp)
target_link_libraries(rkllm_test PRIVATE rkllm)
