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

#include <iota/api/responses/get_tips.hpp>

namespace IOTA {

namespace API {

namespace Responses {

GetTips::GetTips(const std::vector<Types::Trytes>& hashes) : hashes_(hashes) {
}

void
GetTips::deserialize(const json& res) {
  Base::deserialize(res);

  if (res.count("hashes")) {
    hashes_ = res.at("hashes").get<std::vector<Types::Trytes>>();
  }
}

const std::vector<Types::Trytes>&
GetTips::getHashes() const {
  return hashes_;
}

std::vector<Types::Trytes>&
GetTips::getHashes() {
  return hashes_;
}

void
GetTips::setHashes(const std::vector<Types::Trytes>& hashes) {
  hashes_ = hashes;
}

}  // namespace Responses

}  // namespace API

}  // namespace IOTA
