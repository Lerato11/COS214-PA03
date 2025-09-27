#ifndef CHATROOM_H
#define CHATROOM_H

#include "User.h"
#include <string>



class ChatRoom{
    private: 
        std::vector<User*> users;
        std::vector<std::string> chatHistory; 

    public:
        void registerUser(User user);
        void removeUser(User user);
        void sendMessage(std::string message, User* fromUser);
        void saveMessage(std::string message, User* fromUser);

};

#endif
