// LAB407.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <limits>

bool IsPrime(long long n)
{
    if (n <= 1)
        return false;
    if (n <= 3)
        return true;
    if (n % 2 == 0)
        return false;

    for (long long i = 3; i <= n / i; i += 2) // avoid overflow by comparing i <= n / i
    {
        if (n % i == 0)
            return false;
    }

    return true;
}

int main()
{
    std::cout << "Prime check utility\n";
    std::cout << "Enter integers to test (enter 0 to quit).\n\n";

    while (true)
    {
        std::cout << "Enter number: ";
        long long value;
        if (!(std::cin >> value))
        {
            // clear bad state and ignore rest of line
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input. Please enter an integer.\n";
            continue;
        }

        if (value == 0)
            break;

        if (IsPrime(value))
            std::cout << value << " is a prime number.\n\n";
        else
            std::cout << value << " is NOT a prime number.\n\n";
    }

    std::cout << "Exiting. To run from Visual Studio use __Debug > Start Without Debugging__ or __Debug > Start Debugging__.\n";
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
