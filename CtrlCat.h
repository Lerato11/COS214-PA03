#ifndef CTRLCAT_H
#define CTRLCAT_H

#include <string>
// #include "Command.h"
#include "ChatRoom.h"
#include "User.h"


class CtrlCat: public ChatRoom {

    public:
        void registerUser(User* user);
        void removeUser(User* user);
        void sendMessage(std::string message, User* fromUser);
        void saveMessage(std::string message, User* fromUser);
        // const std::vector<std::string>& getChatHistory() const;

};

#endif