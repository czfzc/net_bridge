#pragma once
#include"PacketQueue.h"
#include"Dispatcher.h"

class Bootstrap
{
private:
	PacketQueue packetQueue;
	Dispatcher dispatcher;
	int maxQueueSize;

public:
	Bootstrap(int maxQueueSize=5);
	~Bootstrap();
	int getMaxQueueSize();
	void setMaxQueueSize(int maxQueueSize);
	/*��ʼ�� ����-1����ʧ�� waitable�����Ƿ���������*/
	int init(bool waitable);

};

