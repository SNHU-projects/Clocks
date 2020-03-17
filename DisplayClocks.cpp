//
// Created by Jef DeWitt on 3/16/20.
//
#include <iostream>
#include <time.h>
#include "DisplayClocks.h"

DisplayClocks::DisplayClocks() {
}

void DisplayClocks::DisplayCurrentTime(tm * currentTime) {
    // Calculate and display current time in the proper format
    char buffer [80];
    FormatClocks(currentTime);
}

void DisplayClocks::FormatClocks(std::tm* now) {
    char buffer [80];
    std::cout << "*************************     *************************" << std::endl;
    std::cout << "*     12-Hour-Clock     *     *     24-Hour-Clock     *" << std::endl;
    strftime (buffer, 80, "*      %I:%M:%S %p      *     *      %H:%M:%S %p      *", now);
    std::cout << buffer << std::endl;
    std::cout << "*************************     *************************" << std::endl;
}

void DisplayClocks::AddOneHour(tm * currentTime) {
    currentTime->tm_hour += 1;
    FormatClocks(currentTime);
}

void DisplayClocks::AddOneMinute(tm * currentTime) {
    currentTime->tm_min += 1;
    FormatClocks(currentTime);
}

void DisplayClocks::AddOneSecond(tm * currentTime) {
    currentTime->tm_sec += 1;
    FormatClocks(currentTime);
}