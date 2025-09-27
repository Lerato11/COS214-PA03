#include "Dogorithm.h"

void Dogorithm::registerUser(User* user){
    users.push_back(user);
}

void Dogorithm::removeUser(User* user) {
    users.erase(
        std::remove(users.begin(), users.end(), user),
        users.end()
    );
}


void Dogorithm::sendMessage(std::string message, User* fromUser) {
    std::cout << "-- Sending Message --" << std::endl;

    for (int i = 0; i < users.size(); i++){
        if (users[i] != fromUser){
            users[i]->receive(message, fromUser, this);
        }
    }
}


void Dogorithm::saveMessage(std::string message, User* fromUser) {
    std::cout << "-- Saving Message --" << std::endl;
    chatHistory.push_back(fromUser->getName() + ": " + message);
}
