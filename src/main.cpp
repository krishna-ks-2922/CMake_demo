#include <iostream>
#include <string>

int main(int argc, char* argv[])
{
    if (argc != 2)
    {
        std::cerr << "Usage: odd_even <number>" << std::endl;
        return 1;
    }

    try
    {
        int number = std::stoi(argv[1]);

        if (number % 2 == 0)
        {
            std::cout << number << " is an even number." << std::endl;
        }
        else
        {
            std::cout << number << " is an odd number." << std::endl;
        }
    }
    catch (const std::exception&)
    {
        std::cerr << "Please provide a valid integer." << std::endl;
        return 1;
    }

    return 0;
}