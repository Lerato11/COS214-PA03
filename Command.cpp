#include "Command.h"

Command::Command(User* user, std::string message, ChatRoom* room) : fromUser(user), message(message), room(room){

}

