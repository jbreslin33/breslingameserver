/*
-----------------------------------------------------------------------------
Filename:    GameServer.h
*/
#ifndef __GAMESERVER_h_
#define __GAMESERVER_h_

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

class Client;

class GameServer
{

public:
    GameServer();
    virtual ~GameServer(void);
    	
	//accept new clients
    	void addNewClient(Client* client) { clientVector.push_back(client); }
	
	//login
	bool checkUserNamePassword    (char* username, char* password);
	bool checkUserNameAvailability(char* username);
	
	//messaging
    	void processClientMessage(char newClientMessage[10]);

protected:
	std::vector<Client*> clientVector;
	Client* client;
};

#endif


