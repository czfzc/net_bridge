#pragma once
#include <string.h>
#include <queue>

/*packet结构体*/
typedef struct Packet {
	unsigned char *buffer;
	int length=0;
	int optionCode;
} NetPacket;

/*NetPacket队列*/
class PacketQueue:private std::queue<NetPacket*>
{
private:
	
public:
	PacketQueue();
	~PacketQueue();
	void pop();
	int size();
	bool empty();
	void push(NetPacket*);
	NetPacket* front();
	NetPacket* back();
};