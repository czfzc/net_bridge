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
	/*初始化 返回-1代表失败 waitable代表是否阻塞调用*/
	int init(bool waitable);

};

