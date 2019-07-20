#include "ActionContainer.h"



ActionContainer::ActionContainer()
{
}

void ActionContainer::loadActionMoudle()
{
	/*此处写动态链接过程代码*/
}

ActionContainer::ActionContainer(PacketQueue &packetQueue)
{
	this->packetQueue = packetQueue;
}


ActionContainer::~ActionContainer()
{
}

void ActionContainer::setPacketQueue(PacketQueue & packetQueue)
{
}

PacketQueue & ActionContainer::getPacketQueue()
{
	return this->packetQueue;
}

int ActionContainer::dispatchDefault(NetPacket netPacket)
{
	return 0;
}

int ActionContainer::dispatchDefault(NetPacket netPacket, int condition)
{
	return 0;
}

int ActionContainer::dispatchAction(ActionImpl action)
{
	return 0;
}

