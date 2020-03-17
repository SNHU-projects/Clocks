//
// Created by Jef DeWitt on 3/16/20.
//
#include <iostream>
#include <time.h>
#include "DisplayClocks.h"

DisplayClocks::DisplayClocks() {
    std::cout << "Display12Hour Class Working!" << std::endl;
}

void DisplayClocks::GetCurrentTime() {


    std::cout << "*************************" << std::endl;
    std::cout << "*     12-Hour-Clock     *" << std::endl;

    // Calculate and display time in the proper formate
    time_t timeInMillis = std::time(nullptr);
    std::tm* now = std::localtime(&timeInMillis);
    char buffer [80];

    strftime (buffer,80,"*      %I:%M:%S %p      *",now);
    std::cout << buffer << std::endl;
    std::cout << "*************************" << std::endl;

}