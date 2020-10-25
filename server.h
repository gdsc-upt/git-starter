#pragma once
#include <enet/enet.h>
class server
{
	ENetHost* host;
public:

private:
	void start();
public:
	server();
	~server();
};

