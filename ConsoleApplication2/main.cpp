#include <cstdio>
#include <string>
#include <iostream>
#include "PacketQueue.h"
using namespace std;

int main()
{
    printf("hello from ConsoleApplication2!\n");
	PacketQueue que;
	NetPacket* pkt=new NetPacket;
	pkt->buffer = new unsigned char[100];
	string("hello world\0").copy((char*)pkt->buffer,15,0);
	que.push(pkt);
	NetPacket *bbb = que.front();
	cout << true <<endl<<bbb->buffer<<endl<<(pkt==bbb);
	getchar();

    return 0;
}