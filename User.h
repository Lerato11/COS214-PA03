#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
#include "Command.h"
#include "ChatRoom.h"

// #include "User.h"


class User {
    protected: 
        std::vector<ChatRoom*> chatRooms; //used an std::vector
        std::string name;
        std::vector<Command*> commandQueue; //used an std::vector

    public:     
        User(std::string name);
        void send(std::string message, ChatRoom* room);
        void receive(std::string message, User* fromUser, ChatRoom* room);
        void addCommand(Command* command);
        void executeAll();
        std::string getName();

};

#endif