// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, SpesCoin dev's
//
// This file is part of Bytecoin.
//
// Bytecoin is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// SpesCoin is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with SpesCoin.  If not, see <http://www.gnu.org/licenses/>.

#include <CryptoNoteCore/CryptoNoteSerialization.h>
#include <CryptoNoteCore/CryptoNoteTools.h>
#include <CryptoNoteCore/DatabaseCacheData.h>
#include <Serialization/SerializationOverloads.h>

namespace CryptoNote {

void ExtendedTransactionInfo::serialize(CryptoNote::ISerializer& s) {
  s(static_cast<CachedTransactionInfo&>(*this), "cached_transaction");
  s(amountToKeyIndexes, "key_indexes");
}

void KeyOutputInfo::serialize(ISerializer& s) {
  s(publicKey, "public_key");
  s(transactionHash, "transaction_hash");
  s(unlockTime, "unlock_time");
  s(outputIndex, "output_index");
}

}
