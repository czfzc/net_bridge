#pragma once
class ActionImpl
{
private:
	PacketQueue packetQueue;
public:
	ActionImpl();
	~ActionImpl();
	/*ʵ�ָ��麯�����ڱ�ActionContainer����*/
	virtual void run();
	/*���������ҹ����߳�*/
	void drop();
	/*�����߲��ҹ����߳�*/
	void chain();

	const inline void setPacketQueue(PacketQueue &packetQueue) {
		this->packetQueue = packetQueue;
	}
};

