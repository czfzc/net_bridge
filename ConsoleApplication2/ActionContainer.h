#pragma once
#include<pthread.h>
#include<list>
#include"PacketQueue.h"
#include"ActionImpl.h"


class ActionContainer
{
private:
	/*�̳߳����ݽṹ*/
	std::list<pthread_t *> threadList;
	/*��ģ�鶯̬����Ϊactionimpl�ൽlist���ݽṹ*/
	std::list<ActionImpl> ActionMoudleList;
	PacketQueue packetQueue;
	/*��̬����actionģ��*/
	void loadActionMoudle();
public:
	/*����ʱ��Ҫ����*/
	ActionContainer(PacketQueue &packetQueue);
	~ActionContainer();

	/*packetqueue��setter��getter*/
	void setPacketQueue(PacketQueue &packetQueue);
	PacketQueue& getPacketQueue();
	/*����packet*/
	int dispatchDefault(NetPacket netPacket);
	/*����packet condition���жϷ���*/
	int dispatchDefault(NetPacket netPacket,int condition);
	/*ͨ��action����*/
	int dispatchAction(ActionImpl action);
	
};

