#include <iostream>
constexpr double g{9.8};

double velocity(double h, int t, double vin)
{
    if (h > 0)
        return vin + g * t;
    else
        return 0.0;
}

double calculate(double height, int t, double InitialVelocity)
{

    return height - InitialVelocity * t - g * t * t * 0.5;
}

void printHeight(int y, double x)
{
    if (x > 0)
        std::cout << "At " << y << " seconds, the ball is at height: " << x << '\n';

    else
        std::cout << "At " << y << " seconds, the ball is on the ground.\n";
}

void printVelocity(double h, int t, double vel)
{

    if (h > 0)
        std::cout << "At " << t << " the object has the velocity of " << vel << " m/s" << '\n'
                  << '\n';

    else

        return;
}
int main()
{

    std::cout << "Enter the height of the tower in meters: ";

    double h{};

    std::cin >> h;
    std::cout << "Enter the initial velocity in m/s: ";

    double v{};
    std::cin >> v;

    std::cout << "How many seconds: ";
    int seconds{};
    std::cin >> seconds;
    int currentSeconds{0};
    while (currentSeconds <= seconds)
    {
        double c1{calculate(h, currentSeconds, v)};
        double v1{velocity(c1, currentSeconds, v)};

        printHeight(currentSeconds, c1);
        printVelocity(c1, currentSeconds, v1);

        ++currentSeconds;
    }
    return 0;
}
