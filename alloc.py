#!/usr/bin/env python3
import torch

debug_alloc = torch.cuda.memory.CUDAPluggableAllocator(
    "./alloc.so", "debug_malloc", "debug_free",
)
torch.cuda.memory.change_current_allocator(debug_alloc)
cuda = torch.device("cuda")
b = torch.zeros(10, device=cuda)
# print(b)
# x = torch.tensor([1., 2.], device=cuda)
# print(x)
