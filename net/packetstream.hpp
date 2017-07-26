#ifndef NETPACKETSTREAM_H
#define NETPACKETSTREAM_H

#include "r3d/r3dbuffer.h"

template<class PKT>
class PacketStream
        : public std::stringstream
{
private:
    PKT mBase;
public:
    PacketStream()
    {
    }
    PacketStream(uint8_t* pkt, size_t size)
    {
        std::copy(pkt, pkt+std::min(size, sizeof(PKT)), (uint8_t*)&mBase);
        if(size > sizeof(PKT))
           write((const char*)pkt + sizeof(PKT), size - sizeof(PKT));
    }
    PacketStream(PKT* pkt, size_t size) : PacketStream((uint8_t *) pkt, size)
    {
    }

    PKT* operator->()
    {
        return &mBase;
    }

    std::vector<uint8_t> data() const
    {
        auto tmp = str();
        std::vector<uint8_t> ret((uint8_t*)&mBase,
                                 (uint8_t*)&mBase+sizeof(PKT));
        ret.insert(ret.end(), (uint8_t*)&tmp[0], (uint8_t*)&tmp[tmp.size()]);
        return ret;
    }
};

#endif // NETPACKETSTREAM_H
