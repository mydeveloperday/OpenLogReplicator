/* Header for ReaderFilesystem class
   Copyright (C) 2018-2020 Adam Leszczynski.

This file is part of Open Log Replicator.

Open Log Replicator is free software; you can redistribute it and/or
modify it under the terms of the GNU General Public License as published
by the Free Software Foundation; either version 3, or (at your option)
any later version.

Open Log Replicator is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTfY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General
Public License for more details.

You should have received a copy of the GNU General Public License
along with Open Log Replicator; see the file LICENSE.txt  If not see
<http://www.gnu.org/licenses/>.  */

#include <string>
#include <pthread.h>
#include "types.h"
#include "Reader.h"

#ifndef READERFILESYSTEM_H_
#define READERFILESYSTEM_H_

using namespace std;

namespace OpenLogReplicator {

    class OracleAnalyser;

    class ReaderFilesystem : public Reader {
    protected:
        int64_t fileDes;
        virtual void redoClose();
        virtual uint64_t redoOpen();
        virtual uint64_t redoRead(uint8_t *buf, uint64_t pos, uint64_t size);

    public:
        ReaderFilesystem(const string alias, OracleAnalyser *oracleAnalyser, uint64_t group);
        virtual ~ReaderFilesystem();
    };
}

#endif