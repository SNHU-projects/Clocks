cmake_minimum_required(VERSION 3.15)
project(Clocks)

set(CMAKE_CXX_STANDARD 14)

add_executable(SDL2Test main.cpp MenuOptions.h MenuOptions.cpp DisplayClocks.cpp DisplayClocks.h DisplayClocks.cpp DisplayClocks.h ClockData.cpp ClockData.h)

#PKG_SEARCH_MODULE(SDL2 REQUIRED sdl2)
#PKG_SEARCH_MODULE(SDL2IMAGE REQUIRED SDL2_image>=2.0.0)
#INCLUDE_DIRECTORIES(${SDL2_INCLUDE_DIRS} ${SDL2IMAGE_INCLUDE_DIRS})
#TARGET_LINK_LIBRARIES(${PROJECT_NAME} ${SDL2_LIBRARIES} ${SDL2IMAGE_LIBRARIES})