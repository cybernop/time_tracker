//
// Created by Alexander Schulze on 08.02.16.
//


#include <iostream>

int main(int argc, char** argv)
{
    if (argc == 1)
    {
        // Same as 'status'
        std::cout << "status\n";
    }
    else if (strcmp(argv[1], "start") == 0)
    {
        // Handle 'start'
        std::cout << "start\n";
    }
    else if (strcmp(argv[1], "stop") == 0)
    {
        // Handle 'stop'
        std::cout << "stop\n";
    }
    else if (strcmp(argv[1], "status") == 0)
    {
        // Handle 'status'
        std::cout << "status\n";
    }

    return 0;
}
