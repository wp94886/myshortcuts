cmake_minimum_required(VERSION 3.5)

project(myshortcuts LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(myshortcuts main.cpp ShortcutProvider.cpp)

add_custom_command(TARGET myshortcuts POST_BUILD
  COMMAND ${CMAKE_COMMAND} -E echo 
  "target located at $<TARGET_FILE:myshortcuts>")