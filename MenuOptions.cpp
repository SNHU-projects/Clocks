//
// Created by Jef DeWitt on 3/16/20.
//

#include <iostream>
#include "MenuOptions.h"

MenuOptions::MenuOptions() {
    std::cout << "Constructor activated!" << std::endl;
}

int MenuOptions::Test() {
    std::cout << "Class member method activated!" << std::endl;
    return 0;
}

// Build menu interface
// Frame the 4 options in asterisks
// Option 1 - Add One Hour
// Option 2 - Add One Minute
// Option 3 - Add One Second
// Option 4 - Exit Program
