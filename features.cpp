//
// Created by Alexander Schulze on 15.02.16.
//

#include "features.h"

#include <chrono>
#include <iostream>
#include <iomanip>


namespace features
{
    void start()
    {
        using namespace std::chrono;

        // Get current time
        const auto start_time = system_clock::now();

        // Calculate the work time
        const int work_minutes = static_cast<int>(8.5f * 60.f);
        const minutes work_time(work_minutes);

        // Calculate the end time
        const auto end_time = start_time + work_time;

        // Print start and approx end time
        const auto start_output = system_clock::to_time_t(start_time);
        const auto end_output   = system_clock::to_time_t(end_time);

        std::cout << "start time: " << std::put_time(std::localtime(&start_output), "%H:%M") << "\n"
                  << "end time:   " << std::put_time(std::localtime(&end_output),   "%H:%M") << "\n";
    }
}

