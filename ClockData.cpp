//
// Created by Jef DeWitt on 3/17/20.
//

#include <time.h>
#include <ctime>
#include "ClockData.h"

// Default constructor
ClockData::ClockData() {
}

// Get current time
tm * ClockData::GetTime() {
    time_t timeInMillis = std::time(nullptr);
    std::tm* now = std::localtime(&timeInMillis);
    return now;
}





