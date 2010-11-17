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
class MessageHandler;
class ListenServer;

class GameServer
{

public:
    GameServer();
    virtual ~GameServer(void);
    	
	//Clients
    	void addNewClient(Client* client) { clientVector.push_back(client); }
	
	//messages
	void setMessageHandler(MessageHandler* messageHandler) { mMessageHandler = messageHandler; }
 	MessageHandler* getMessageHandler() { return mMessageHandler; }
    	void processClientMessage(char newClientMessage[10]);
	
	//Listener
	void setListener(ListenServer* listenServer) { mListenServer = listenServer; }
	ListenServer* getListenServer() { return mListenServer; }


protected:
	//Clients
	std::vector<Client*> clientVector;
	Client* mClient;

	//Messages
	MessageHandler* mMessageHandler;

	//Listener
	ListenServer* mListenServer;
};

#endif


