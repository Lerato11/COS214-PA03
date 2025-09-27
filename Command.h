#ifndef COMMAND_H
#define COMMAND_H

#include <string>
// #include "Command.h"
#include "ChatRoom.h"
#include "SaveMessageCommand.h"
#include "SendMessageCommand.h"
#include "User.h"


class Command {
    protected: 
        ChatRoom room;
        std::string message;
        User fromUser;

    public: 
        void execute();

};

#endif