cmake_minimum_required(VERSION 3.3)

project(time_tracker)

set(HEADERS
        features.h)

set(SOURCES
        main.cpp features.cpp)

add_executable(${PROJECT_NAME}
        ${HEADERS}
        ${SOURCES}
        )
