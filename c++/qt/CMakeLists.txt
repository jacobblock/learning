cmake_minimum_required(VERSION 2.8.11)
project(qt)
set(CMAKE_VERBOSE_MAKEFILE on)
set(CMAKE_INCLUDE_CURRENT_DIR on)
set(CMAKE_AUTOMOC on)
set(CMAKE_CXX_FLAGS "-Wall -std=c++11")
set(CMAKE_BUILD_TYPE debug)

find_package(Qt5 REQUIRED COMPONENTS Core Gui Qml Quick Widgets)

add_executable(qml qml.cpp)
target_link_libraries(qml Qt5::Core Qt5::Gui Qt5::Qml Qt5::Quick Qt5::Widgets)
configure_file(widget.qml widget.qml COPYONLY)
