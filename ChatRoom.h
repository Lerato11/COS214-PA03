#ifndef CHATROOM_H
#define CHATROOM_H

#include "User.h"
#include <string>



class ChatRoom{
    private: 
        User* users; 
        std::string* chatHistory; 

    public:
        void registerUser(User user);
        void removeUser(User user);
        void sendMessage(std::string message, User fromUser);
        void saveMessage(std::string message, User fromUser);

};

#endif
