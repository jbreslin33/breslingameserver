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
	std::cout << "Creating GameServer\n";
	
	mListenServer = new ListenServer();
	
	//lets run loop here for now........
	bool serverOn = true;
	while (serverOn)
	{	
		listenServer->processRequests();

	}
	

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

