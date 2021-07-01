// Copyright (c) 2017-2020 The PIVX developers
// Copyright (c) 2021- The ELONCOIN developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef ELONCOIN_ZEROCOIN_H
#define ELONCOIN_ZEROCOIN_H

#include "uint256.h"
#include "libzerocoin/bignum.h"

uint256 GetPubCoinHash(const CBigNum& bnValue);

#endif //ELONCOIN_ZEROCOIN_H
