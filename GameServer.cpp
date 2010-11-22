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
  	mMessageHandler = NULL;
	mListenServer   = NULL;
	mGame           = NULL;
int i = clientVector.size();	
}
//-------------------------------------------------------------------------------------
GameServer::~GameServer(void)
{
}

void GameServer::processClientMessage(char newClientMessage[10])
{
    printf("GameServer: I got this message.... \"%s\"\n", newClientMessage);

}

void GameServer::joinGame(std::string userName)
{

	//other wise check to see if name is taken
	bool nameAvailable = true;
	
	for (int i = 0; i < clientVector.size(); i++)
	{
		std::cout << "looping clients\n";

		if (clientVector.at(i)->getUserName().compare(userName) == 0)
		{
			nameAvailable = false;
		}
	}
	
	if (nameAvailable)
	{
		std::cout << "You are unique sir, you may join!\n";
		Client* newClient = new Client(userName);
		addNewClient(newClient);	
	}
	else
	{

		std::cout << "You need to be original to join this game biter\n";
	}
}

void GameServer::leaveGame(std::string userName)
{

}
