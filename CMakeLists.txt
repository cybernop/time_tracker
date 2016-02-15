cmake_minimum_required(VERSION 3.3)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(time_tracker)

set(HEADERS
        features.h)

set(SOURCES
        main.cpp features.cpp)

add_executable(${PROJECT_NAME}
        ${HEADERS}
        ${SOURCES}
        )
