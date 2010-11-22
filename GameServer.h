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
class Game;

class GameServer
{

public:
    GameServer();
    virtual ~GameServer(void);
    	
	//Clients 
    	void            addNewClient        (Client*         client        )  { clientVector.push_back(client);   }
	
	//messages    ..mMessageHandler recieves a message from mListener translates it and calls function on mGame or mGameServer
	void            setMessageHandler   (MessageHandler* messageHandler)  { mMessageHandler = messageHandler; }
 	MessageHandler* getMessageHandler   (                              )  { return mMessageHandler;           }
    	void            processClientMessage(char newClientMessage[10]     );
	
	//Listener  ...mListener sits and recieves messages over network passes them off to mMessageHandler
	void            setListenServer     (ListenServer*   listenServer  )  { mListenServer = listenServer;     }
	ListenServer*   getListenServer     (                              )  { return mListenServer;             }

	//Game       ..run game logic as if everything is local i guess..and let mGameServer handle network details.
	void            setGame             (Game*           game          )  { mGame         = game;            }
	Game*           getGame             (                              )  { return mGame;                     }

	void            joinGame            (std::string userName, std::string ip, std::string port          );
	void            leaveGame           (std::string userName          );


	
protected:

	//Clients
	std::vector<Client*> clientVector;

	//Messages
	MessageHandler* mMessageHandler;

	//Listener
	ListenServer*   mListenServer;

	//Game
	Game*           mGame;

};

#endif


