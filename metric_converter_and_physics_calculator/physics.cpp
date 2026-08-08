#include <iostream>
#include <cmath>
#include "constants.h"

// Kinematics

// time > 0
double averageVelocity(double distance, double time)
{

    double result{distance / time};
    return result;
}

// time > 0
double acceleration(double initialVelocity, double finalVelocity, double time)
{

    double result{(finalVelocity - initialVelocity) / time};
    return result;
}

// time >= 0
double displacement(double initialVelocity, double acceleration, double time)
{
    double result{initialVelocity * time + 0.5 * acceleration * time * time};
    return result;
}

// time >= 0
double finalVelocity(double initialVelocity, double acceleration, double time)
{
    double result{initialVelocity + acceleration * time};
    return result;
}
double accelerationFromdisplacement(double displacement,double initialVelocity,double time)
{
double result{(displacement-initialVelocity*time)*2/time/time};
return result;
}
// Dynamics

// m >= 0
double NewtonLaw2(double mass, double acceleration)
{
    double result{mass * acceleration};
    return result;
}

// m >= 0
double weight(double mass)
{
    double result{mass * g};
    return result;
}

// everything > 0
double frictionForce(double frictionCoeff, double normalForce)
{
    double result{frictionCoeff * normalForce};
    return result;
}

// mass >= 0 radius > 0
double centripetalForce(double mass, double velocity, double radius)
{
    double result{mass * velocity * velocity / radius};
    return result;
}
double centripetalForceAng(double mass, double angularVelocity, double radius)
{
double result{mass*angularVelocity*angularVelocity*radius};
return result;
}
// Work, Energy, & Power

double work(double Force, double distance, double angle)
{
    double result{Force * distance * std::cos(angle * PI / 180.0)};
    return result;
}

// m >= 0
double kinEnergy(double mass, double velocity)
{
    double result{0.5 * mass * velocity * velocity};
    return result;
}

// m >= 0
double GravPotentialEnergy(double mass, double height)
{
    double result{mass * g * height};
    return result;
}

// k > 0
double ElasticPotEn(double springConst, double displacement)
{
    double result{0.5 * springConst * displacement * displacement};
    return result;
}

// time > 0
double mechanicalPower(double work, double time)
{
    double result{work / time};
    return result;
}

// mass > 0
double momentum(double mass, double velocity)
{
    double result{mass * velocity};
    return result;
}

// time > 0
double impulse(double force, double time)
{
    double result{force * time};
    return result;
}

// Electricity

// R > 0
double voltage(double current, double resistance)
{
    double result{current * resistance};
    return result;
}

// R > 0
double electricPower(double voltage, double current)
{
    double result{voltage * current};
    return result;
}
double electricPowerC(double current,double resistance)
{
double result{current*current*resistance};
return result;
}
double seriesResistance(int count)
{
    double totalResistance{0.0};

    for (int i{1}; i <= count; ++i)
    {
        std::cout << "Enter resistance for resistor #" << i << " (Ohms): ";
        double currentResistor{0.0};
        std::cin >> currentResistor;

        
        totalResistance += currentResistor;
    }

    return totalResistance;
}

double parallelResistance(int count)
{
    double totalResistance{0.0};

    for (int i{1}; i <= count; ++i)
    {
        std::cout << "Enter resistance for resistor #" << i << " (Ohms): ";
        double currentResistor{0.0};
        std::cin >> currentResistor;

         if(currentResistor > 0.0)
        totalResistance += 1.0 / currentResistor;
    }
    if (totalResistance > 0.0)
    return 1.0 / totalResistance;
return 0.0;
}


