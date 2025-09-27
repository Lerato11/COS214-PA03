#ifndef SENDMESSAGECOMMAND_H
#define SENDMESSAGECOMMAND_H

#include "Command.h"


class SendMessageCommand : public Command
{
    public: 
        SendMessageCommand();
        void execute();

};


#endif
