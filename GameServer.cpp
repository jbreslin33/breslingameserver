/*
-----------------------------------------------------------------------------
Filename:    GameServer.cpp
*/

#include "GameServer.h"
#include "../breslinclient/Client.h"
#include "../breslinlistenserver/ListenServer.h"

#include <iostream>

//-------------------------------------------------------------------------------------
GameServer::GameServer()
{
	std::cout << "GameServer Constructor\n";
	
	std::cout << "Create instance of ListenServer in GameServer Constructor\n";
	mListenServer = new ListenServer();
/*	
	bool serverOn = true;
	while (serverOn)
	{	
		mListenServer->processRequests();

	}
*/	

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

