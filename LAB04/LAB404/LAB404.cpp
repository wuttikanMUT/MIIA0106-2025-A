// LAB404.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    // Student ID last two digits (given): "02"
    std::string studentId = "02";

    // Ensure we have at least two characters, then take the last two
    if (studentId.size() < 2) {
        studentId = std::string(2 - studentId.size(), '0') + studentId;
    }
    std::string lastTwo = studentId.substr(studentId.size() - 2);

    // Convert to integer (stoi handles "02" -> 2)
    int n = 0;
    try {
        n = std::stoi(lastTwo);
    } catch (...) {
        std::cerr << "Invalid student ID digits.\n";
        return 1;
    }

    std::cout << "Multiplication table for last two digits \"" << lastTwo << "\" (value " << n << ")\n\n";

    // Print table 1..12 (change upper bound if you want a different range)
    for (int i = 1; i <= 12; ++i) {
        std::cout << std::setw(2) << n << " x " << std::setw(2) << i << " = " << std::setw(3) << (n * i) << '\n';
    }

    return 0;
}
