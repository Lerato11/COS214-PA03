#ifndef COMMAND_H
#define COMMAND_H

#include <string>


class User;
class ChatRoom;

class Command {
    protected: 
        ChatRoom* room;
        std::string message;
        User* fromUser;

    public: 
        Command(User* user, std::string message, ChatRoom* room);
        virtual void execute() = 0;
        virtual ~Command() = default;

};

#endif