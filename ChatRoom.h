#ifndef CHATROOM_H
#define CHATROOM_H

#include "User.h"
#include <string>



class ChatRoom{
    protected: // made protected so they can be accessed in subclasses
        std::vector<User*> users;
        std::vector<std::string> chatHistory; 

    public:
        virtual void registerUser(User* user) = 0;
        virtual void removeUser(User* user) = 0;
        virtual void sendMessage(std::string message, User* fromUser) = 0;
        virtual void saveMessage(std::string message, User* fromUser) = 0;

};

#endif
