#include "CtrlCat.h"

void CtrlCat::registerUser(User* user){
    users.push_back(user);


}

void CtrlCat::removeUser(User* user) {
    users.erase(
        std::remove(users.begin(), users.end(), user),
        users.end()
    );
}


void CtrlCat::sendMessage(std::string message, User* fromUser) {
    std::cout << "-- Sending Message --" << std::endl;

    for (int i = 0; i < users.size(); i++){
        if (users[i] != fromUser){
            users[i]->receive(message, fromUser, this);
        }
    }
}


void CtrlCat::saveMessage(std::string message, User* fromUser) {
    std::cout << "-- Saving Message --" << std::endl;
    chatHistory.push_back(fromUser->getName() + ": " + message);
}

