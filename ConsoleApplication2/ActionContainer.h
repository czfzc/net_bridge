#pragma once
#include<pthread.h>
#include<list>
#include"PacketQueue.h"
#include"ActionImpl.h"


class ActionContainer
{
private:
	/*线程池数据结构*/
	std::list<pthread_t *> threadList;
	/*将模块动态加载为actionimpl类到list数据结构*/
	std::list<ActionImpl> ActionMoudleList;
	PacketQueue packetQueue;
	/*动态加载action模块*/
	void loadActionMoudle();
public:
	/*构造时需要队列*/
	ActionContainer(PacketQueue &packetQueue);
	~ActionContainer();

	/*packetqueue的setter和getter*/
	void setPacketQueue(PacketQueue &packetQueue);
	PacketQueue& getPacketQueue();
	/*调度packet*/
	int dispatchDefault(NetPacket netPacket);
	/*调度packet condition是中断符号*/
	int dispatchDefault(NetPacket netPacket,int condition);
	/*通过action调用*/
	int dispatchAction(ActionImpl action);
	
};

