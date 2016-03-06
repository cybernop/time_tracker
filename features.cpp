//
// Created by Alexander Schulze on 15.02.16.
//

#include "features.h"

#include <chrono>
#include <fstream>
#include <iostream>
#include <iomanip>


namespace features
{
    void start()
    {
        using namespace std::chrono;

        // Get current time
        const time_point<system_clock> start_time = system_clock::now();

        // Calculate the work time
        const int work_minutes = static_cast<int>(8.5f * 60.f);
        const minutes work_time(work_minutes);

        // Calculate the end time
        const time_point<system_clock> end_time = start_time + work_time;

        // Print start and approx end time
        const time_t start_output = system_clock::to_time_t(start_time);
        const time_t end_output   = system_clock::to_time_t(end_time);

        std::cout << "start time: " << std::put_time(std::localtime(&start_output), "%H:%M") << "\n"
                  << "end time:   " << std::put_time(std::localtime(&end_output),   "%H:%M") << "\n";

        // Open file stream to write new track
        std::ofstream output_file("track.txt", std::ios::out | std::ios::binary);

        output_file << std::put_time(std::localtime(&start_output), "%F %T") << " start\n";

    }
}

