#ifndef SENDMESSAGECOMMAND_H
#define SENDMESSAGECOMMAND_H

#include "Command.h"
#include <string>

class User;
class ChatRoom;


class SendMessageCommand : public Command
{
    public: 
        SendMessageCommand(User* user, std::string message, ChatRoom* room);
        void execute();

};


#endif
