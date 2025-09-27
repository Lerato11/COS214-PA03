#include "SendMessageCommand.h"

SendMessageCommand::SendMessageCommand(User* user, std::string message, ChatRoom* room): Command(user, message, room){

}

void SendMessageCommand::execute(){
    room->sendMessage(this->message, this->fromUser);
}