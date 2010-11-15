/*
-----------------------------------------------------------------------------
Filename:    GameServer.cpp
*/

#include "GameServer.h"
#include "../breslinclient/Client.h"

//-------------------------------------------------------------------------------------
GameServer::GameServer()
{
	client             = new Client            ();
	client->setUsername("jbreslin");
}
//-------------------------------------------------------------------------------------
GameServer::~GameServer(void)
{
}

void GameServer::processClientMessage(char newClientMessage[10])
{
    printf("GameServer: I got this message.... \"%s\"\n", newClientMessage);

}

