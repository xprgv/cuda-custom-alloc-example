#include <stdio.h>
#include <sys/types.h>

#include <cuda_runtime_api.h>

void* debug_malloc(ssize_t size, int device, cudaStream_t stream) {
    void* ptr;
    cudaMalloc(&ptr, size);
    printf("malloc: %p %ld\n", ptr, size);
    return ptr;
}

void debug_free(void* ptr, ssize_t size, int device, cudaStream_t stream) {
    printf("free %p\n", ptr);
    cudaFree(ptr);
}
