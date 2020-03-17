//
// Created by Jef DeWitt on 3/16/20.
//

#include <iostream>
#include "MenuOptions.h"
#include "DisplayClocks.h"


MenuOptions::MenuOptions() {

    // Build menu interface
    std::cout << "               *************************" << std::endl;
    std::cout << "               *  1 - Add One Hour     *" << std::endl;
    std::cout << "               *  2 - Add One Minute   *" << std::endl;
    std::cout << "               *  3 - Add One Second   *" << std::endl;
    std::cout << "               *  4 - Exit Program     *" << std::endl;
    std::cout << "               *************************" << std::endl;

}

void MenuOptions::CollectUserInput(tm * currentTime) {
    DisplayClocks displayClocks;
    int userInput;

    do {

        std::cout << "What would you like to do? " << std::endl;
        std::cin >> userInput;
        std::cin.clear(); // clears input error flag
        std::cin.ignore(100,'\n'); // clears out leftover characters, including newlines

        switch(userInput) {
            case 1:
                displayClocks.AddOneHour(currentTime);
                MenuOptions();
                break;
            case 2:
                displayClocks.AddOneMinute(currentTime);
                MenuOptions();
                break;
            case 3:
                displayClocks.AddOneSecond(currentTime);
                MenuOptions();
                break;
            case 4:
                std::cout << "System exiting. Goodbye." << std::endl;
                exit(0);
            default:
                std::cout << "Please try again." << std::endl;
        }

    } while (userInput != 4);

}
