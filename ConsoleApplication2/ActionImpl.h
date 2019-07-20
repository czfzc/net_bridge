#pragma once
class ActionImpl
{
private:
	PacketQueue packetQueue;
public:
	ActionImpl();
	~ActionImpl();
	/*实现该虚函数用于被ActionContainer调用*/
	virtual void run();
	/*丢弃包并且挂起线程*/
	void drop();
	/*包流走并且挂起线程*/
	void chain();

	const inline void setPacketQueue(PacketQueue &packetQueue) {
		this->packetQueue = packetQueue;
	}
};

