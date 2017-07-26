#ifndef ONPACKET_H
#define ONPACKET_H

#include "serveri.hpp"
#include "basepacket.hpp"

template<class PKT>
class OnPacket
{
protected:
    ServerI *pServer;
    typedef void(packetslotfun)(uint32_t, uint8_t*, size_t);
    typedef wink::slot<packetslotfun> packetslot;
public:
    OnPacket(ServerI &server)
        : OnPacket(&server)
    {

    }

    OnPacket(ServerI *server)
    {
        pServer = server;
        pServer->OnPacket[PKT::CHANNEL][PKT::ID]
                .connect(packetslot(this, (packetslotfun OnPacket<PKT>::*) &OnPacket<PKT>::Handle));
    }

    virtual ~OnPacket()
    {
        pServer->OnPacket[PKT::CHANNEL][PKT::ID]
                .disconnect(packetslot(this,
                                       (packetslotfun OnPacket<PKT>::*) &OnPacket<PKT>::Handle));
    }

    virtual void Handle(uint32_t cid, PKT *pkt, size_t size)
    {
    }
};

#endif // ONPACKET_H
