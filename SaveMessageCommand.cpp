#include "SaveMessageCommand.h"
#include "ChatRoom.h" 

SaveMessageCommand::SaveMessageCommand(User* user, std::string message, ChatRoom* room): Command(user, message, room){

}

void SaveMessageCommand::execute(){
    room->saveMessage(this->message, this->fromUser);
}