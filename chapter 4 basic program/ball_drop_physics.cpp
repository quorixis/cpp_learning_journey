#include <iostream>
#define g 9.8

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

void height(int y, double x)
{
    if (x > 0)
        std::cout << "At " << y << " seconds, the ball is at height: " << x << '\n';

    else
        std::cout << "At " << y << " seconds, the ball is on the ground.\n";
}

void printvelocity(double h, int t, double velocity)
{

    if (h > 0)
        std::cout << "At " << t << " the object has the velocity of " << velocity << " m/s" << '\n'
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
    double c1{calculate(h, 0, v)};
    double c2{calculate(h, 1, v)};
    double c3{calculate(h, 2, v)};
    double c4{calculate(h, 3, v)};
    double c5{calculate(h, 4, v)};
    double c6{calculate(h, 5, v)};

    double v1{velocity(c1, 0, v)};
    double v2{velocity(c2, 1, v)};
    double v3{velocity(c3, 2, v)};
    double v4{velocity(c4, 3, v)};
    double v5{velocity(c5, 4, v)};
    double v6{velocity(c6, 5, v)};

    height(0, c1);
    printvelocity(c1, 0, v1);
    height(1, c2);
    printvelocity(c2, 1, v2);
    height(2, c3);
    printvelocity(c3, 2, v3);
    height(3, c4);
    printvelocity(c4, 3, v4);
    height(4, c5);
    printvelocity(c5, 4, v5);
    height(5, c6);
    printvelocity(c6, 5, v6);

    return 0;
}
