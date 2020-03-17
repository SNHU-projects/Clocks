//
// Created by Jef DeWitt on 3/16/20.
//
#include <iostream>
#include <time.h>
#include "DisplayClocks.h"

DisplayClocks::DisplayClocks() {
}

void DisplayClocks::GetCurrentTime() {

    // Calculate and display time in the proper format
    time_t timeInMillis = std::time(nullptr);
    std::tm* now = std::localtime(&timeInMillis);
    char buffer [80];
    FormatClocks(now, buffer);

}

void DisplayClocks::FormatClocks(std::tm* now, char *buffer) {
    std::cout << "*************************     *************************" << std::endl;
    std::cout << "*     12-Hour-Clock     *     *     24-Hour-Clock     *" << std::endl;
    strftime (buffer, 80, "*      %I:%M:%S %p      *     *      %H:%M:%S %p      *", now);
    std::cout << buffer << std::endl;
    std::cout << "*************************     *************************" << std::endl;
}

void DisplayClocks::AddOneHour() {
//    FormatClocks(now + 1, buffer);
}

void DisplayClocks::AddOneMinute() {

}

void DisplayClocks::AddOneSecond() {

}