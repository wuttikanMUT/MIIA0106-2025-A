// LAB405.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <random>
#include <limits>

int main()
{
    std::mt19937 rng(std::random_device{}());
    std::uniform_int_distribution<int> dist(1, 100);

    bool play = true;
    while (play) {
        int secret = dist(rng);
        int attempts = 0;

        std::cout << "I have chosen a number between 1 and 100.\n";
        std::cout << "Try to guess it (enter 0 to give up this round).\n";

        while (true) {
            std::cout << "Enter your guess: ";
            int guess;
            if (!(std::cin >> guess)) {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input. Please enter an integer.\n";
                continue;
            }

            if (guess == 0) {
                std::cout << "You gave up. The number was " << secret << ".\n";
                break;
            }

            ++attempts;

            if (guess < secret) {
                std::cout << "Too low.\n";
            } else if (guess > secret) {
                std::cout << "Too high.\n";
            } else {
                std::cout << "Correct! You guessed the number in " << attempts << " attempt";
                if (attempts != 1) std::cout << "s";
                std::cout << ".\n";
                break;
            }
        }

        std::cout << "Play again? (y/n): ";
        char choice = 'n';
        while (std::cin >> choice) {
            if (choice == 'y' || choice == 'Y') { play = true; break; }
            if (choice == 'n' || choice == 'N') { play = false; break; }
            std::cout << "Please enter 'y' or 'n': ";
        }
    }

    std::cout << "Thanks for playing!\n";
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
