#ifndef DOGORITHM_H
#define DOGORITHM_H

#include <string>
// #include "Command.h"
#include "ChatRoom.h"
#include "User.h"


class Dogorithm: public ChatRoom {

    public:
        void registerUser(User* user);
        void removeUser(User* user);
        void sendMessage(std::string message, User* fromUser);
        void saveMessage(std::string message, User* fromUser);

};

#endif