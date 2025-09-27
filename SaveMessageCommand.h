#ifndef SAVEMESSAGECOMMAND_H
#define SAVEMESSAGECOMMAND_H

#include "Command.h"
#include <string>

class User;
class ChatRoom;

class SaveMessageCommand : public Command
{
    public: 
        SaveMessageCommand(User* user, std::string message, ChatRoom* room);
        void execute();

};


#endif
