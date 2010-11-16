/*
-----------------------------------------------------------------------------
Filename:    GameServer.cpp
*/

#include "GameServer.h"
#include "../breslinclient/Client.h"

#include <iostream>

//-------------------------------------------------------------------------------------
GameServer::GameServer()
{
	std::cout << "Creating GameServer\n";
	
	

//	mClient             = new Client            ();
//	client->setUsername("jbreslin");
}
//-------------------------------------------------------------------------------------
GameServer::~GameServer(void)
{
}

void GameServer::processClientMessage(char newClientMessage[10])
{
    printf("GameServer: I got this message.... \"%s\"\n", newClientMessage);

}

