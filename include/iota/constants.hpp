//
// MIT License
//
// Copyright (c) 2017-2018 Thibault Martinez and Simon Ninon
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in all
// copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
// SOFTWARE.
//
//

#pragma once

#include <iota/types/trinary.hpp>
#include <string>

namespace IOTA {

//! Trytes
const Types::Trytes TryteAlphabet = "9ABCDEFGHIJKLMNOPQRSTUVWXYZ";

//! Length-related constants
const unsigned int ChecksumLength            = 9;
const unsigned int TryteAlphabetLength       = 27;
const unsigned int FragmentLength            = 27;
const unsigned int TagLength                 = 27;
const unsigned int SeedLength                = 81;
const unsigned int SeedLengthWithChecksum    = 90;
const unsigned int AddressLength             = 81;
const unsigned int AddressLengthWithChecksum = 90;
const unsigned int HashLength                = 81;
const unsigned int NonceLength               = 27;
const unsigned int TritNonceLength           = 81;
const unsigned int ByteHashLength            = 48;
const unsigned int TritHashLength            = 243;
const unsigned int MaxTrxMsgLength           = 2187;
const unsigned int TxLength                  = 8019;
const unsigned int TrxTrytesLength           = 2673;

//! Default values
const Types::Trytes EmptyHash(HashLength, '9');
const Types::Trytes EmptyNonce(NonceLength, '9');
const Types::Trytes EmptyTag(TagLength, '9');

//! POW configuration
const int PowStateSize      = 729;
const int PowNumberOfRounds = 81;

//! Misc
const int GetBalancesRecommandedConfirmationThreshold = 100;

//! IRI API version
const std::string APIVersion = "1.2.0";

}  // namespace IOTA
