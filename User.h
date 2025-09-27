#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>

class ChatRoom;
class Command;


class User {
    protected: 
        std::vector<ChatRoom*> chatRooms; //used an std::vector
        std::string name;
        std::vector<Command*> commandQueue; //used an std::vector

    public:     
        User(std::string name);
        virtual ~User();
        void send(std::string message, ChatRoom* room);
        void receive(std::string message, User* fromUser, ChatRoom* room);
        void addCommand(Command* command);
        void executeAll();
        void addChatRoom(ChatRoom* chatRoom);
        std::string getName();

};

#endif