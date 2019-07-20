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
	/*��ʼ��dispatcher ����-1�������*/
	int init();
};

