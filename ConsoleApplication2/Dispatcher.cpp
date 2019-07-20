#include "Dispatcher.h"


Dispatcher::Dispatcher(PacketQueue &packetQueue)
{
}

void Dispatcher::setPacketQueue(PacketQueue & packetQueue)
{
	this->packetQueue = packetQueue;
}

PacketQueue & Dispatcher::getPacketQueue()
{
	return packetQueue;
}

Dispatcher::~Dispatcher()
{
}

int Dispatcher::init()
{
	return 0;
}
