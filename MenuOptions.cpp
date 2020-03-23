//
// Created by Jef DeWitt on 3/16/20.
//

#include <iostream>
#include "MenuOptions.h"
#include "DisplayClocks.h"
#include "chrono"


// Default Constructor
MenuOptions::MenuOptions() {
}

// Build menu interface
void MenuOptions::DisplayMenu() {

    std::cout << "               *************************" << std::endl;
    std::cout << "               *  1 - Add One Hour     *" << std::endl;
    std::cout << "               *  2 - Add One Minute   *" << std::endl;
    std::cout << "               *  3 - Add One Second   *" << std::endl;
    std::cout << "               *  4 - Exit Program     *" << std::endl;
    std::cout << "               *************************" << std::endl;

}

// Method to handle user input
void MenuOptions::CollectUserInput(tm * currentTime) {
    DisplayClocks displayClocks;
    int userInput;

    do {
        // Collect user input
        std::cout << "Press ENTER to display menu." << std::endl;
        // Check for enter key presses
        if (std::cin.get() == '\n') {
            DisplayMenu();
            std::cin >> userInput;
            std::cin.clear(); // clears input error flag
            std::cin.ignore(100,'\n'); // clears out leftover characters, including newlines
        }
        else {
            // If user enters a selection before entering menu, re-prompt to show menu.
            userInput = 5;
            std::cin.clear(); // clears input error flag
            std::cin.ignore(100,'\n'); // clears out leftover characters, including newlines
        }
        // Switch handles expected user input and
        // calls appropriate methods
        switch(userInput) {
            case 1:
                displayClocks.AddOneHour(currentTime);
                break;
            case 2:
                displayClocks.AddOneMinute(currentTime);
                break;
            case 3:
                displayClocks.AddOneSecond(currentTime);
                break;
            case 4:
                std::cout << "System exiting. Goodbye." << std::endl;
                exit(0);
            default:
                std::cout << "Please try again." << std::endl;
        }
    // When userInput is 4, exit
    } while (userInput != 4);

}
