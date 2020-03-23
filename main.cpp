#include <iostream>
#include "MenuOptions.h"
#include "DisplayClocks.h"
#include "ClockData.h"

int main() {

    // Get current time
    ClockData clockData;
    tm * currentTime = clockData.GetTime();

    // Display 12 & 24-hour clocks
    DisplayClocks displayClocks;
    displayClocks.DisplayCurrentTime(currentTime);

    // Display clock program menu
    MenuOptions menuOptions;
    // Collect user input and take appropriate action
    menuOptions.CollectUserInput(currentTime);

    return 0;
}
