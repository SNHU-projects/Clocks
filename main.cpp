#include <iostream>
#include "MenuOptions.h"
#include "DisplayClocks.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    MenuOptions menuOptions;
    menuOptions.Test();

    DisplayClocks displayClocks;
    displayClocks.GetCurrentTime();

    // Call clock faces to display
    // display 12 hour face
    // display 24 hour face

    // Call menu options to display
    // display menu options

    return 0;
}
