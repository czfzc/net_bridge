#include "PacketQueue.h"
#include <queue>


PacketQueue::PacketQueue()
{
	
}


PacketQueue::~PacketQueue()
{
	
}

void PacketQueue::push(NetPacket* netPacket)
{
	queue<NetPacket*>::push(netPacket);
}

NetPacket* PacketQueue::front()
{
	return queue<NetPacket*>::front();
}

NetPacket* PacketQueue::back()
{
	return queue<NetPacket*>::back();
}

void PacketQueue::pop()
{
	queue<NetPacket*>::pop();
}

int PacketQueue::size()
{
	return queue<NetPacket*>::size();
}

bool PacketQueue::empty()
{
	return queue<NetPacket*>::empty();
}
