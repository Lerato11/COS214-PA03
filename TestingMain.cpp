#include <iostream>
#include "User.h"
#include "CtrlCat.h"
#include "Dogorithm.h"
#include "SendMessageCommand.h"
#include "SaveMessageCommand.h"
#include "DestroyLonely.h"
#include "PlayboiCarti.h"
#include "KenCarson.h"


int main(){

    // Chat rooms
    CtrlCat ctrlCatChat;
    Dogorithm dogorithmChat;

    // Opium 
    DestroyLonely lone;
    PlayboiCarti carti;
    KenCarson ken;


    // Register Users
    ctrlCatChat.registerUser(&lone);

    dogorithmChat.registerUser(&ken);

    // carti is in both
    dogorithmChat.registerUser(&carti);
    ctrlCatChat.registerUser(&carti);

    carti.send("MUSIC", &ctrlCatChat);
    lone.send("</3", &ctrlCatChat);

    carti.send("BABY BOI", &dogorithmChat);
    ken.send("More Chaos", &dogorithmChat);


    std::cout << "\n--- CtrlCat Chat History ---\n";
    for (int i = 0; i < ctrlCatChat.getChatHistory().size(); i++) {
        std::cout << ctrlCatChat.getChatHistory()[i] << std::endl;
    }

    std::cout << "\n--- Dogorithm Chat History ---\n";
    for (int i = 0; i < dogorithmChat.getChatHistory().size(); i++) {
        std::cout << dogorithmChat.getChatHistory()[i] << std::endl;
    }


    return 0;
}