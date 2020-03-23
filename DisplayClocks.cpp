//
// Created by Jef DeWitt on 3/16/20.
//
#include <iostream>
#include <time.h>
#include "DisplayClocks.h"

// Default Constructor
DisplayClocks::DisplayClocks() {
}

// Calculate and display current time in the proper format
void DisplayClocks::DisplayCurrentTime(tm * currentTime) {
    char buffer [80];
    FormatClocks(currentTime);
}

// Build Clock interfaces -- 12 & 24-hour
void DisplayClocks::FormatClocks(std::tm* now) {
    char buffer [80];
    std::cout << "*************************     *************************" << std::endl;
    std::cout << "*     12-Hour-Clock     *     *     24-Hour-Clock     *" << std::endl;
    strftime (buffer, 80, "*      %I:%M:%S %p      *     *      %H:%M:%S %p      *", now);
    std::cout << buffer << std::endl;
    std::cout << "*************************     *************************" << std::endl;
}

// Add one hour logic
void DisplayClocks::AddOneHour(tm * currentTime) {
    if (currentTime->tm_hour == 23) {
        // Reset hours to 00 for 24-hour clock, do not exceed 23 hours
        currentTime->tm_hour = 0;
    }
    else {
        // Add one hour
        currentTime->tm_hour += 1;
    }
    FormatClocks(currentTime);
}

// Add one minute logic
void DisplayClocks::AddOneMinute(tm * currentTime) {
    if (currentTime->tm_min == 59) {
        // Reset minutes, do not exceed 59 minutes
        currentTime->tm_min = 0;
        // Add one hour for minutes rollover
        AddOneHour(currentTime);
    }
    else {
        // Add one minute
        currentTime->tm_min += 1;
    }
    FormatClocks(currentTime);
}

// Add one second logic
void DisplayClocks::AddOneSecond(tm * currentTime) {
    if (currentTime->tm_sec == 59) {
        // Reset seconds, do not exceed 59 seconds
        currentTime->tm_sec = 0;
        // Add one minute for seconds rollover
        AddOneMinute(currentTime);
    }
    else {
        // Add one second
        currentTime->tm_sec += 1;
    }
    FormatClocks(currentTime);
}