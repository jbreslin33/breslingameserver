#include "GameServer.h"
#include "../breslinlistenserver/ListenServer.h"
#include "../breslinmessagehandler/MessageHandler.h"

#include <iostream>
#include <string>

int main()
{
	std::cout << "Creating Generic GameServer..." << std::endl;
	GameServer*     gameServer     = new GameServer    ();
	
	std::cout << "Creating pointer to  Generic GameServer..." << std::endl;
    	ListenServer*   listenServer   = new ListenServer  ();

	std::cout << "Creating pointer to Generic MessageHandler..." << std::endl;
	MessageHandler* messageHandler = new MessageHandler();
    
	listenServer->setMessageHandler(messageHandler);

	messageHandler->setGameServer(gameServer);


    bool gameOn = true;
    while (gameOn == true)
    {
        listenServer->processRequests();
    }

}
