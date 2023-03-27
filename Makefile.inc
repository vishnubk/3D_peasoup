# This is where common definitions go
INSTALL_DIR = /hercules/scratch/vishnu/MeerKAT_TUTORIAL/INSTALLED_BINARIES

#cuda setup
CUDA_DIR   = /mpcdf/soft/CentOS_7/packages/x86_64/cuda/10.2.89

#Thrust 1.7.1 or higher
THRUST_DIR = $(CUDA_DIR)/include

# dedisp setup
DEDISP_DIR = /hercules/scratch/vishnu/MeerKAT_TUTORIAL/INSTALLED_BINARIES

GPU_ARCH_FLAG = -arch=sm_75

GCC       = gcc
GXX       = g++
AR        = ar
NVCC      = $(CUDA_DIR)/bin/nvcc
SHELL     = /bin/bash
UCFLAGS   = -DUSE_NVTX
