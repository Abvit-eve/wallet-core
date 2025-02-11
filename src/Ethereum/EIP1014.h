// Copyright © 2017-2023 Trust Wallet.
//
// This file is part of Trust. The full Trust copyright notice, including
// terms governing use, modification, and redistribution, is contained in the
// file LICENSE at the root of the source code distribution tree.

#pragma once

#include "Data.h"

namespace TW::Ethereum {

Data create2Address(const std::string& from, const Data& salt, const Data& initCodeHash);
std::string create2AddressString(const std::string& from, const Data& salt, const Data& initCodeHash);

}
