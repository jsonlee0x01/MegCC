/**
 * \file
 * compiler/lib/KernelGen/GeneralIntrinsic/Rotate.h
 *
 * This file is part of MegCC, a deep learning compiler developed by Megvii.
 *
 * \copyright Copyright (c) 2021-2022 Megvii Inc. All rights reserved.
 */
#pragma once
#include "CvCommon.h"
#include "compiler/KernelGen/KernelGen.h"
namespace megcc {
namespace KernelGen {
namespace GeneralIntrinsic {

class RotateKernel : public CVKernelImpl {
public:
    bool IsCVAvailable(TContext* context) const override;
    std::string GetCVKernelBody(TContext* context) const override;
    std::string GetCVKernelSubSymbol(TContext* context) const override;
    std::string GetCVKernelSignature(TContext* context) const override;
};

}  // namespace GeneralIntrinsic
}  // namespace KernelGen
}  // namespace megcc