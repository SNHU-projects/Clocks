#include <iostream>
#include "MenuOptions.h"
#include "DisplayClocks.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    // Display 12 & 24-hour clocks
    DisplayClocks displayClocks;
    displayClocks.GetCurrentTime();

    // Display clock program menu
    MenuOptions menuOptions;
    // Collect user input and take appropriate action
    menuOptions.CollectUserInput();

    return 0;
}
