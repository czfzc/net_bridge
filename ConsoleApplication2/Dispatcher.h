#pragma once
#include "PacketQueue.h"
#include "ActionContainer.h"

class Dispatcher
{
private:
	PacketQueue packetQueue;
	ActionContainer actionContainer;
public:
	Dispatcher(PacketQueue &packetQueue);
	void setPacketQueue(PacketQueue &packetQueue);
	PacketQueue& getPacketQueue();
	~Dispatcher();
	/*初始化dispatcher 返回-1代表出错*/
	int init();
};

