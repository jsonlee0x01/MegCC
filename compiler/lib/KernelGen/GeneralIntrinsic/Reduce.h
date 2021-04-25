/**
 * \file
 * compiler/lib/KernelGen/GeneralIntrinsic/Reduce.h
 *
 * This file is part of MegCC, a deep learning compiler developed by Megvii.
 *
 * \copyright Copyright (c) 2021-2022 Megvii Inc. All rights reserved.
 */
#pragma once
#include <sstream>
#include <string>
#include "compiler/KernelGen/KernelGen.h"

namespace megcc {
namespace KernelGen {
namespace GeneralIntrinsic {

class ReduceKernel : public KernelFunc {
public:
    bool IsAvailable(TContext* context) const override;
    std::string GetKernelSymbol(TContext* context) const override;
    std::string GetKernelBody(TContext* context) const override;
};

}  // namespace GeneralIntrinsic
}  // namespace KernelGen
}  // namespace megcc