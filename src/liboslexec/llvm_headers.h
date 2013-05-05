/*
Copyright (c) 2009-2010 Sony Pictures Imageworks Inc., et al.
All Rights Reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are
met:
* Redistributions of source code must retain the above copyright
  notice, this list of conditions and the following disclaimer.
* Redistributions in binary form must reproduce the above copyright
  notice, this list of conditions and the following disclaimer in the
  documentation and/or other materials provided with the distribution.
* Neither the name of Sony Pictures Imageworks nor the names of its
  contributors may be used to endorse or promote products derived from
  this software without specific prior written permission.
THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
"AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*/

#ifndef OSL_LLVM_HEADERS_H
#define OSL_LLVM_HEADERS_H

#ifdef LLVM_NAMESPACE
namespace llvm = LLVM_NAMESPACE;
#endif

#include <llvm/Bitcode/ReaderWriter.h>
#if OSL_LLVM_VERSION >= 33
#include <llvm/IR/Constants.h>
#include <llvm/IR/DerivedTypes.h>
#else
#include <llvm/Constants.h>
#include <llvm/DerivedTypes.h>
#endif
#include <llvm/ExecutionEngine/GenericValue.h>
#include <llvm/ExecutionEngine/JIT.h>
#include <llvm/ExecutionEngine/JITMemoryManager.h>
#if OSL_LLVM_VERSION >= 33
#include <llvm/IR/Instructions.h>
#include <llvm/IR/Intrinsics.h>
#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Module.h>
#else
#include <llvm/Instructions.h>
#include <llvm/Intrinsics.h>
#include <llvm/LLVMContext.h>
#include <llvm/Module.h>
#endif
#include <llvm/Linker.h>
#include <llvm/PassManager.h>
#if OSL_LLVM_VERSION >= 33
#include <llvm/IR/IRBuilder.h>
#elif OSL_LLVM_VERSION >= 32
#include <llvm/IRBuilder.h>
#else
#include <llvm/Support/IRBuilder.h>
#endif
#include <llvm/Support/ManagedStatic.h>
#include <llvm/Support/MemoryBuffer.h>
#include <llvm/Support/raw_ostream.h>
#if OSL_LLVM_VERSION >= 33
#include <llvm/IR/DataLayout.h>
#elif OSL_LLVM_VERSION == 32
#include <llvm/DataLayout.h>
#else
#include <llvm/Target/TargetData.h>
#endif

#endif /* OSL_LLVM_HEADERS_H */
