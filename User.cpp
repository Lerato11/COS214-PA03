#include "User.h"
#include "SendMessageCommand.h"
#include "SaveMessageCommand.h"

User::User(std::string name): name(name){
    // initialise user with name
}


void User::send(std::string message, ChatRoom* room){

    // create both commands (objects)
    Command* sendMessCmnd = new SendMessageCommand(this, message, room);
    Command* saveMessCmnd = new SaveMessageCommand(this, message, room);

    // add them to the command queue
    addCommand(sendMessCmnd);
    addCommand(saveMessCmnd);

    // execute both commands
    executeAll();
}


void User::receive(std::string message, User* fromUser, ChatRoom* room){

    std::cout << "*** User received the message from: " << fromUser->getName() << " ***" << std::endl;
    std::cout << "Message: " << message << std::endl;
    
}

void User::addCommand(Command* command){
    
    // std::cout << "------ Adding Command ------" << std::endl;
    
    commandQueue.push_back(command);

}

void User::executeAll(){

    // execute all commands in queue and dealloc all memory before clearing queue
    for (int i = 0; i < commandQueue.size(); i++){
        commandQueue[i]->execute();
        delete commandQueue[i];
    }

    commandQueue.clear();
}

std::string User::getName(){
    return this->name;
}

void User::addChatRoom(ChatRoom* chatroom){

    // no duplcates  (don't add if already in that room)
    if (std::find(chatRooms.begin(), chatRooms.end(), chatroom) == chatRooms.end()) {
        chatRooms.push_back(chatroom);
    }
}


User::~User() {
    for (int i = 0; i < commandQueue.size(); i++){
        commandQueue[i]->execute();
        delete commandQueue[i];
    }

    commandQueue.clear();

}