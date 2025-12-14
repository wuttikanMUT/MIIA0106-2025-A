// LAB406.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <cctype>

enum class LinePosition
{
    Left,
    Center,
    Right,
    Unknown
};

class LineFollowingRobot
{
public:
    LineFollowingRobot(int baseSpeed = 50)
        : leftMotorSpeed_(baseSpeed), rightMotorSpeed_(baseSpeed), baseSpeed_(baseSpeed)
    {
    }

    // Update control based on sensor reading
    void Update(LinePosition pos)
    {
        switch (pos)
        {
        case LinePosition::Left:
            SteerLeft();
            break;
        case LinePosition::Right:
            SteerRight();
            break;
        case LinePosition::Center:
            GoStraight();
            break;
        default:
            Stop();
            break;
        }

        PrintMotors();
    }

private:
    int leftMotorSpeed_;
    int rightMotorSpeed_;
    int baseSpeed_;

    void SteerLeft()
    {
        // Slow left motor, speed up right motor to turn left
        leftMotorSpeed_ = baseSpeed_ / 2;
        rightMotorSpeed_ = baseSpeed_;
        std::cout << "Sensor: Line detected on LEFT -> Turning left\n";
    }

    void SteerRight()
    {
        // Slow right motor, speed up left motor to turn right
        leftMotorSpeed_ = baseSpeed_;
        rightMotorSpeed_ = baseSpeed_ / 2;
        std::cout << "Sensor: Line detected on RIGHT -> Turning right\n";
    }

    void GoStraight()
    {
        leftMotorSpeed_ = baseSpeed_;
        rightMotorSpeed_ = baseSpeed_;
        std::cout << "Sensor: Line detected CENTER -> Going straight\n";
    }

    void Stop()
    {
        leftMotorSpeed_ = 0;
        rightMotorSpeed_ = 0;
        std::cout << "Sensor: Unknown -> Stopping\n";
    }

    void PrintMotors() const
    {
        std::cout << "  Left motor speed : " << leftMotorSpeed_
                  << "  Right motor speed : " << rightMotorSpeed_ << "\n\n";
    }
};

LinePosition ParseInput(const std::string &s)
{
    if (s.empty())
        return LinePosition::Unknown;

    char c = static_cast<char>(std::toupper(static_cast<unsigned char>(s[0])));
    if (c == 'L')
        return LinePosition::Left;
    if (c == 'R')
        return LinePosition::Right;
    if (c == 'C')
        return LinePosition::Center;
    return LinePosition::Unknown;
}

int main()
{
    LineFollowingRobot robot(60);

    std::cout << "Line Following Robot - Simulation\n";
    std::cout << "Commands:\n";
    std::cout << "  L - line on LEFT\n";
    std::cout << "  C - line in CENTER\n";
    std::cout << "  R - line on RIGHT\n";
    std::cout << "  S - stop / unknown\n";
    std::cout << "  Q - quit\n\n";

    while (true)
    {
        std::cout << "Enter sensor reading (L/C/R/S) or Q to quit: ";
        std::string input;
        if (!(std::cin >> input))
            break;

        char c = static_cast<char>(std::toupper(static_cast<unsigned char>(input[0])));
        if (c == 'Q')
            break;

        LinePosition pos = ParseInput(input);
        robot.Update(pos);

        // simulate small delay that would exist in a real control loop
        std::this_thread::sleep_for(std::chrono::milliseconds(250));
    }

    std::cout << "Simulation finished. Thanks.\n";
    std::cout << "To run from Visual Studio use __Debug > Start Without Debugging__ or __Debug > Start Debugging__.\n";
    return 0;
}
