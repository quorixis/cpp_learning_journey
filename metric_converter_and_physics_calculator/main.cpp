#include <iostream>
#include "physics.h"
#include "converter.h"
#include <cmath>
#include <chrono>
#include <thread>
#include "constants.h"

void converter()
{
    std::cout << "what type of conversion do you want to use:\n"
              << "for temperature press 1\n"
              << "for distance/length press 2\n"
              << "for mass press 3\n"
              << "for volume press 4\n"
              << ": ";
    int conv{};
    std::cin >> conv;
    if (conv == 1)
    {
        std::cout << "choose input type\n"
                  << "celsius = 1\n"
                  << "fahrenheit = 2\n"
                  << "kelvin = 3\n";
        int temp{};
        std::cin >> temp;
        if (temp == 1)
        {
            std::cout << "choose output type:\n"
                      << "kelvin = 1\n"
                      << "fahrenheit = 2\n";
            int tempcels{};
            std::cin >> tempcels;
            if (tempcels == 1)
            {
                std::cout << "Enter temperature value in Celsius: ";
                double cels{};
                std::cin >> cels;
                std::cout << cels << " celsius in kelvin is " << celsiusToKelvin(cels);
            }
            else if (tempcels == 2)
            {
                std::cout << "Enter temperature value in Celsius: ";
                double cels{};
                std::cin >> cels;
                std::cout << cels << " celsius in fahrenheit is " << celsiusToFahrenheit(cels);
            }
        }
        else if (temp == 2)
        {
            std::cout << "choose output type:\n"
                      << "kelvin = 1\n"
                      << "celsius = 2\n";
            int tempfahr{};
            std::cin >> tempfahr;
            if (tempfahr == 1)
            {
                std::cout << "Enter temperature value in Fahrenheits: ";
                double fahr{};
                std::cin >> fahr;
                std::cout << fahr << " fahrenheits in kelvin is " << fahrenheitToKelvin(fahr);
            }
            else if (tempfahr == 2)
            {
                std::cout << "Enter temperature value in Fahrenheits: ";
                double fahr{};
                std::cin >> fahr;
                std::cout << fahr << " fahrenheits in celsius is " << fahrenheitToCelsius(fahr);
            }
        }
        else if (temp == 3)
        {
            std::cout << "choose output type:\n"
                      << "celsius = 1\n"
                      << "fahrenheit = 2\n";
            int tempkelv{};
            std::cin >> tempkelv;
            if (tempkelv == 1)
            {
                std::cout << "Enter temperature value in Kelvin: ";
                double kelv{};
                std::cin >> kelv;
                std::cout << kelv << " kelvin in celsius is " << kelvinToCelsius(kelv);
            }
            else if (tempkelv == 2)
            {
                std::cout << "Enter temperature value in Kelvin: ";
                double kelv{};
                std::cin >> kelv;
                std::cout << kelv << " kelvin in fahrenheit is " << kelvinToFahrenheit(kelv);
            }
        }
    }
    else if (conv == 2)
    {
        std::cout << "choose distance input/output type:\n"
                  << "kilometers / miles = 1\n"
                  << "meters / feet = 2\n"
                  << " centimeters / inches = 3\n";
        int dist{};
        std::cin >> dist;
        if (dist == 1)
        {
            std::cout << "choose input type:\n"
                      << "kilometers = 1\n"
                      << "miles = 2\n";
            int distkmm{};
            std::cin >> distkmm;
            if (distkmm == 1)
            {
                std::cout << "Enter the distance value in km: ";
                double distkm{};
                std::cin >> distkm;
                std::cout << distkm << " km in miles is " << kilometersToMiles(distkm) << " mi";
            }
            else if (distkmm == 2)
            {
                std::cout << "Enter the distance value in miles(mi): ";
                double distm{};
                std::cin >> distm;
                std::cout << distm << " miles in km is " << milesToKilometers(distm) << " km";
            }
        }
        else if (dist == 2)
        {
            std::cout << "choose input type:\n"
                      << "meters = 1\n"
                      << "feet = 2\n";
            int distmtft{};
            std::cin >> distmtft;
            if (distmtft == 1)
            {
                std::cout << "Enter the distance value in meters(m): ";
                double distmt{};
                std::cin >> distmt;
                std::cout << distmt << " m in feet is " << metersToFeet(distmt) << " ft";
            }
            else if (distmtft == 2)
            {
                std::cout << "Enter the distance value in feet(ft): ";
                double distft{};
                std::cin >> distft;
                std::cout << distft << " feets in meters(m) is " << feetToMeters(distft) << " m";
            }
        }
        else if (dist == 3)
        {
            std::cout << "choose input type:\n"
                      << "centimeters = 1\n"
                      << "inches = 2\n";
            int distcmin{};
            std::cin >> distcmin;
            if (distcmin == 1)
            {
                std::cout << "Enter the distance value in centimeters(cm): ";
                double distcm{};
                std::cin >> distcm;
                std::cout << distcm << " cm in inches is " << centimetersToInches(distcm) << " inch";
            }
            else if (distcmin == 2)
            {
                std::cout << "Enter the distance value in inches(inch): ";
                double distin{};
                std::cin >> distin;
                std::cout << distin << " inches in centimeters(cm) is " << inchesToCentimeters(distin) << " cm";
            }
        }
    }
    else if (conv == 3)
    {
        std::cout << "choose mass input/output type:\n"
                  << "kilogram / pounds = 1\n"
                  << "gram / ounces = 2\n";

        int mass{};
        std::cin >> mass;
        if (mass == 1)
        {
            std::cout << "choose input type:\n"
                      << "kilogramm = 1\n"
                      << "pounds = 2\n";
            int masskgp{};
            std::cin >> masskgp;
            if (masskgp == 1)
            {
                std::cout << "Enter the mass in kg: ";
                double masskg{};
                std::cin >> masskg;
                std::cout << masskg << " kg in pounds is " << kilogramsToPounds(masskg) << " pounds";
            }
            else if (masskgp == 2)
            {
                std::cout << "Enter the mass in pounds: ";
                double massp{};
                std::cin >> massp;
                std::cout << massp << " pounds in kg is " << poundsToKilograms(massp) << " kg";
            }
        }
        else if (mass == 2)
        {
            std::cout << "choose input type:\n"
                      << "gramm = 1\n"
                      << "ounce = 2\n";
            int massgo{};
            std::cin >> massgo;
            if (massgo == 1)
            {
                std::cout << "Enter the mass in gramms(g): ";
                double massg{};
                std::cin >> massg;
                std::cout << massg << " g in ounces is " << gramsToOunces(massg) << " oz";
            }
            else if (massgo == 2)
            {
                std::cout << "Enter the mass in ounces(oz): ";
                double masso{};
                std::cin >> masso;
                std::cout << masso << " ounces in gramms(g) is " << ouncesToGrams(masso) << " g";
            }
        }
    }
    else if (conv == 4)
    {
        std::cout << "choose volume input type:\n"
                  << "liters = 1\n"
                  << "gallons = 2\n";

        int vol{};
        std::cin >> vol;
        if (vol == 1)
        {

            std::cout << "Enter the volume in litters(l): ";
            double voll{};
            std::cin >> voll;
            std::cout << voll << " litters in gallons is " << litersToGallons(voll) << " gallons";
        }

        else if (vol == 2)
        {

            std::cout << "Enter the volume in gallons: ";
            double volg{};
            std::cin >> volg;
            std::cout << volg << " gallons in litters(l) is " << gallonsToLiters(volg) << " l";
        }
    }
}

void physics()
{
    std::cout << "What type of calculation do you want to do?\n"
              << "1.Kinematics\n"
              << "2.Dynamics\n"
              << "3.Work & Energy & Power\n"
              << "4.Electricity\n"
              << "Enter(1-4): ";
    int phys{};
    std::cin >> phys;
    if (phys == 1)
    {
        std::cout << "choose(1-4):\n"
                  << "1.average velocity\n"
                  << "2.acceleration\n"
                  << "3.displacement\n"
                  << "4.final velocity\n"
                  << ": ";
        int physkin{};
        std::cin >> physkin;
        if (physkin == 1)
        {
            std::cout << "Enter distance: ";
            double distance{};
            std::cin >> distance;
            std::cout << "Enter time: ";
            double time{};
            std::cin >> time;
            std::cout << "average velocity is " << averageVelocity(distance, time) << " m/s";
        }
        else if (physkin == 2)
        {
            std::cout << "Enter initial velocity: ";
            double initialVelocity{};
            std::cin >> initialVelocity;
            std::cout << "Enter final velocity: ";
            double finalVelocity{};
            std::cin >> finalVelocity;
            std::cout << "Enter time: ";
            double time{};
            std::cin >> time;
            std::cout << "acceleration is " << acceleration(initialVelocity, finalVelocity, time) << " m/s^2";
        }
        else if (physkin == 3)
        {
            std::cout << "Do you know the acceleration?:\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << ":";
            int accelerationKnow{};
            std::cin >> accelerationKnow;
            if (accelerationKnow == 1)
            {
                std::cout << "Enter initial velocity: ";
                double initialVelocity{};
                std::cin >> initialVelocity;
                std::cout << "Enter the acceleration: ";
                double acceleration{};
                std::cin >> acceleration;
                std::cout << "Enter time: ";
                double time{};
                std::cin >> time;
                std::cout << "the displacement is equal to " << displacement(initialVelocity, acceleration, time) << " m";
            }
            else if (accelerationKnow == 2)
                std::cout << "Enter initial velocity: ";
            double initialVelocity{};
            std::cin >> initialVelocity;
            std::cout << "Enter final velocity: ";
            double finalVelocity{};
            std::cin >> finalVelocity;
            std::cout << "Enter time: ";
            double time{};
            std::cin >> time;
            std::cout << "the displacement is equal to " << displacement(initialVelocity, acceleration(initialVelocity, finalVelocity, time), time) << " m";
        }
        else if (physkin == 4)
        {
            std::cout << "Do you know the acceleration?:\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << ":";
            int accelerationKnow{};
            std::cin >> accelerationKnow;
            if (accelerationKnow == 1)
            {
                std::cout << "Enter initial velocity: ";
                double initialVelocity{};
                std::cin >> initialVelocity;
                std::cout << "Enter the acceleration: ";
                double acceleration{};
                std::cin >> acceleration;
                std::cout << "Enter time: ";
                double time{};
                std::cin >> time;
                std::cout << "the final Velocity is equal to " << finalVelocity(initialVelocity, acceleration, time) << " m/s";
            }
            else if (accelerationKnow == 2)
                std::cout << "Enter initial velocity: ";
            double initialVelocity{};
            std::cin >> initialVelocity;
            std::cout << "Enter displacement: ";
            double displacement{};
            std::cin >> displacement;
            std::cout << "Enter time: ";
            double time{};
            std::cin >> time;
            std::cout << "the final Velocity is equal to " << finalVelocity(initialVelocity, accelerationFromdisplacement(displacement, initialVelocity, time), time) << " m/s";
        }
    }
    else if (phys == 2)
    {
        std::cout << "what dou you want to calculate:\n"
                  << "1.Force\n"
                  << "2.weight\n"
                  << "3.friction force\n"
                  << "4.centripetal force\n"
                  << "Enter(1-4): ";
        int physdyn{};
        std::cin >> physdyn;
        if (physdyn == 1)
        {
            std::cout << "Do you know the acceleration:\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << "Enter(1-2): ";
            int accelerationKnow{};
            std::cin >> accelerationKnow;
            if (accelerationKnow == 1)
            {
                std::cout << "enter the acceleration: ";
                double acceleration{};
                std::cin >> acceleration;
                std::cout << "enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "the force acting on the object is equal to " << NewtonLaw2(mass, acceleration) << " N";
            }
            else if (accelerationKnow == 2)
            {
                std::cout << "what do you know:\n"
                          << "1.final velocity\n"
                          << "2.displacement\n"
                          << "Enter(1-2): ";
                int accelerationVersion{};
                std::cin >> accelerationVersion;
                if (accelerationVersion == 1)
                {
                    std::cout << "Enter initial velocity: ";
                    double initialVelocity{};
                    std::cin >> initialVelocity;
                    std::cout << "Enter final velocity: ";
                    double finalVelocity{};
                    std::cin >> finalVelocity;
                    std::cout << "Enter time: ";
                    double time{};
                    std::cin >> time;
                    std::cout << "Enter mass: ";
                    double mass{};
                    std::cin >> mass;
                    std::cout << "the force acting on the object is " << NewtonLaw2(mass, acceleration(initialVelocity, finalVelocity, time)) << " N";
                }
                else if (accelerationVersion == 2)
                {
                    std::cout << "Enter initial velocity: ";
                    double initialVelocity{};
                    std::cin >> initialVelocity;
                    std::cout << "Enter displacement: ";
                    double displacement{};
                    std::cin >> displacement;
                    std::cout << "Enter time: ";
                    double time{};
                    std::cin >> time;
                    double mass{};
                    std::cin >> mass;
                    std::cout << "the force acting on the object is " << NewtonLaw2(mass, accelerationFromdisplacement(initialVelocity, displacement, time)) << " N";
                }
            }
        }
        else if (physdyn == 2)
        {
            std::cout << "Enter the mass of an object: ";
            double mass{};
            std::cin >> mass;
            std::cout << "the weight of an object is equal to " << weight(mass) << " N";
        }
        else if (physdyn == 3)
        {
            std::cout << "Do you know the normal force?\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << "Enter(1-2): ";
            int normalForceknow{};
            std::cin >> normalForceknow;
            if (normalForceknow == 1)
            {
                std::cout << "Enter the friction coefficient value: ";
                double frictionCoeff{};
                std::cin >> frictionCoeff;
                std::cout << "Enter the normal force value: ";
                double normalForce{};
                std::cout << "the friction force equals to " << frictionForce(frictionCoeff, normalForce) << " N";
            }
            else if (normalForceknow == 2)
            {
                std::cout << "where the object is located?\n"
                          << "1.horizontal surface\n"
                          << "2.inclined surface\n"
                          << "Enter(1-2): ";
                int whatSurface{};
                std::cin >> whatSurface;
                if (whatSurface == 1)
                {
                    std::cout << "Enter the mass of an object: ";
                    double mass{};
                    std::cin >> mass;
                    std::cout << "Enter the friction coefficient value: ";
                    double frictionCoeff{};
                    std::cin >> frictionCoeff;
                    std::cout << "the friction force equals to " << frictionForce(frictionCoeff, weight(mass)) << " N";
                }
                else if (whatSurface == 2)
                {
                    std::cout << "Enter the mass of an object: ";
                    double mass{};
                    std::cin >> mass;
                    std::cout << "Enter the friction coefficient value: ";
                    double frictionCoeff{};
                    std::cin >> frictionCoeff;
                    std::cout << "Enter the angle between inclined surface and horizon: ";
                    double angle{};
                    std::cin >> angle;
                    std::cout << "the friction force equals to " << frictionForce(frictionCoeff, weight(mass)) * std::cos(angle * PI / 180.0) << " N";
                }
            }
        }
        else if (physdyn == 4)
        {
            std::cout << "what type of velocity:\n"
                      << "1.angular\n"
                      << "2.linear\n"
                      << "Enter(1-2): ";
            int velocityType{};
            std::cin >> velocityType;
            if (velocityType == 1)
            {
                std::cout << "Enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "Enter the angular velocity: ";
                double angVelocity{};
                std::cin >> angVelocity;
                std::cout << "Enter the radius of a curve/circle: ";
                double radius{};
                std::cin >> radius;
                std::cout << "The centripetal force is " << centripetalForceAng(mass, angVelocity, radius) << " N";
            }
            else if (velocityType == 2)
            {
                std::cout << "Enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "Enter the velocity: ";
                double velocity{};
                std::cin >> velocity;
                std::cout << "Enter the radius of a curve/circle: ";
                double radius{};
                std::cin >> radius;
                std::cout << "The centripetal force is " << centripetalForce(mass, velocity, radius) << " N";
            }
        }
    }
    else if (phys == 3)
    {
        std::cout << "choose what you want to calculate\n"
                  << "1.work\n"
                  << "2.energy\n"
                  << "3.power\n"
                  << "4.momentum/impulse\n"
                  << "Enter(1-4): ";
        int physwen{};
        std::cin >> physwen;
        if (physwen == 1)
        {
            std::cout << "Do you know the force value:\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << "Enter(1-2): ";
            int forceKnow{};
            std::cin >> forceKnow;
            if (forceKnow == 1)
            {
                std::cout << "Enter the force value: ";
                double force{};
                std::cin >> force;
                std::cout << "Enter the distance traveled by object: ";
                double distance{};
                std::cin >> distance;
                std::cout << "Enter the angle between force and object trajectory: ";
                double angle{};
                std::cin >> angle;
                std::cout << "The work is " << work(force, distance, angle) << " J";
            }
            else if (forceKnow == 2)
                std::cout << "Do you know the acceleration of an object:\n"
                          << "1.yes\n"
                          << "2.no\n"
                          << "Enter(1-2): ";
            int accelerationKnow{};
            std::cin >> accelerationKnow;
            if (accelerationKnow == 1)
            {
                std::cout << "enter the acceleration: ";
                double acceleration{};
                std::cin >> acceleration;
                std::cout << "enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "Enter the distance traveled by object: ";
                double distance{};
                std::cin >> distance;
                std::cout << "Enter the angle between force and object trajectory: ";
                double angle{};
                std::cin >> angle;
                std::cout << "The work is " << work(NewtonLaw2(mass, acceleration), distance, angle) << " J";
            }
            else if (accelerationKnow == 2)
            {
                std::cout << "Enter initial velocity: ";
                double initialVelocity{};
                std::cin >> initialVelocity;
                std::cout << "Enter time: ";
                double time{};
                std::cin >> time;
                std::cout << "enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "Enter the distance traveled by object: ";
                double distance{};
                std::cin >> distance;
                std::cout << "Enter the angle between force and object trajectory: ";
                double angle{};
                std::cin >> angle;
                std::cout << "The work is " << work(NewtonLaw2(mass, accelerationFromdisplacement(distance, initialVelocity, time)), distance, angle) << " J";
            }
        }
        else if (physwen == 2)
        {
            std::cout << "what type of energy do you want to calculate:\n"
                      << "1.Kinetic Energy\n"
                      << "2.Gravitational Potential Energy\n"
                      << "3.Elastic Potential Energy\n"
                      << "Enter(1-3): ";
            int physen{};
            std::cin >> physen;
            if (physen == 1)
            {
                std::cout << "enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "enter the velocity of an object: ";
                double velocity{};
                std::cin >> velocity;
                std::cout << "the kinetic energy of an object is " << kinEnergy(mass, velocity);
            }
            else if (physen == 2)
            {
                std::cout << "enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "enter the height of an object: ";
                double height{};
                std::cin >> height;
                std::cout << "the gravitational energy of an object is " << GravPotentialEnergy(mass, height);
            }
            else if (physen == 3)
            {
                std::cout << "enter the spring constant of an object: ";
                double stringConst{};
                std::cin >> stringConst;
                std::cout << "enter the displacement value: ";
                double displacement{};
                std::cin >> displacement;
                std::cout << "the elastic energy of an object is " << ElasticPotEn(stringConst, displacement);
            }
        }
        else if (physwen == 3)
        {
            std::cout << "Do you know the value of a work:\n"
                      << "1.yes\n"
                      << "2.no\n"
                      << "Enter(1-2): ";
            int workKnow{};
            std::cin >> workKnow;
            if (workKnow == 1)
            {
                std::cout << "Enter the value of a work: ";
                double work{};
                std::cin >> work;
                std::cout << "Enter time: ";
                double time{};
                std::cin >> time;
                std::cout << "the mechanical power is " << mechanicalPower(work, time);
            }
            else if (workKnow == 2)
            {
                std::cout << "Do you know the force value:\n"
                          << "1.yes\n"
                          << "2.no\n"
                          << "Enter(1-2): ";
                int forceKnow{};
                std::cin >> forceKnow;
                if (forceKnow == 1)
                {
                    std::cout << "Enter the force value: ";
                    double force{};
                    std::cin >> force;
                    std::cout << "Enter the distance traveled by object: ";
                    double distance{};
                    std::cin >> distance;
                    std::cout << "Enter the time: ";
                    double time{};
                    std::cin >> time;
                    std::cout << "The mechanical power is " << mechanicalPower(work(force, distance, 0), time);
                }
                else if (forceKnow == 2)
                    std::cout << "Do you know the acceleration of an object:\n"
                              << "1.yes\n"
                              << "2.no\n"
                              << "Enter(1-2): ";
                int accelerationKnow{};
                std::cin >> accelerationKnow;
                if (accelerationKnow == 1)
                {
                    std::cout << "enter the acceleration: ";
                    double acceleration{};
                    std::cin >> acceleration;
                    std::cout << "enter the mass of an object: ";
                    double mass{};
                    std::cin >> mass;
                    std::cout << "Enter the distance traveled by object: ";
                    double distance{};
                    std::cin >> distance;
                    std::cout << "Enter the time: ";
                    double time{};
                    std::cin >> time;
                    std::cout << "The mechanical Power is " << mechanicalPower(work(NewtonLaw2(mass, acceleration), distance, 0), time);
                }
                else if (accelerationKnow == 2)
                {
                    std::cout << "Enter initial velocity: ";
                    double initialVelocity{};
                    std::cin >> initialVelocity;
                    std::cout << "Enter time: ";
                    double time{};
                    std::cin >> time;
                    std::cout << "enter the mass of an object: ";
                    double mass{};
                    std::cin >> mass;
                    std::cout << "Enter the distance traveled by object: ";
                    double distance{};
                    std::cin >> distance;
                    std::cout << "The mechanical Power is " << mechanicalPower(work(NewtonLaw2(mass, accelerationFromdisplacement(distance, initialVelocity, time)), distance, 0.0), time);
                }
            }
        }
        else if (physwen == 4)
        {
            std::cout << "what you want to calculate:\n"
                      << "1.momentum\n"
                      << "2.impulse\n"
                      << "Enter(1-2): ";
            int impmom{};
            std::cin >> impmom;
            if (impmom == 1)
            {
                std::cout << "Enter the mass of an object: ";
                double mass{};
                std::cin >> mass;
                std::cout << "Enter the velocity of an object: ";
                double velocity{};
                std::cin >> velocity;
                std::cout << "the momentum of an object is " << momentum(mass, velocity);
            }
            else if (impmom == 2)
            {
                std::cout << "Enter the value of a force: ";
                double force{};
                std::cin >> force;
                std::cout << "Enter the time: ";
                double time{};
                std::cin >> time;
                std::cout << "The impulse is " << impulse(force, time);
            }
        }
    }
    else if (phys == 4)
    {
        std::cout << "what you want to calculate:\n"
                  << "1.voltage\n"
                  << "2.power\n"
                  << "3.resistance\n"
                  << "Enter(1-3): ";
        int physelec{};
        std::cin >> physelec;
        if (physelec == 1)
        {
            std::cout << "Enter electric current: ";
            double current{};
            std::cin >> current;
            std::cout << "Enter Resistance: ";
            double resistance{};
            std::cin >> resistance;
            std::cout << "The voltage is " << voltage(current, resistance);
        }
        else if (physelec == 2)
        {
            std::cout << "Do you know voltage?\n"
                      << "1.yes\n"
                      << "2.no\n";
            int voltageKnow{};
            std::cin >> voltageKnow;
            if (voltageKnow == 1)
            {
                std::cout << "Enter electric current: ";
                double current{};
                std::cin >> current;
                std::cout << "Enter Voltage: ";
                double voltage{};
                std::cin >> voltage;
                std::cout << "the electric power is " << electricPower(voltage, current);
            }
            else if (voltageKnow == 2)
            {
                std::cout << "Enter electric current: ";
                double current{};
                std::cin >> current;
                std::cout << "Enter Resistance: ";
                double resistance{};
                std::cin >> resistance;
                std::cout << "the electric power is " << electricPowerC(current, resistance);
            }
        }
        else if (physelec == 3)
        {
            std::cout << "how resistors are connected:\n"
                      << "1.In series\n"
                      << "2.Parallel\n"
                      << "Enter(1-2): ";
            int resistorsHow{};
            std::cin >> resistorsHow;
            if (resistorsHow == 1)
            {
                std::cout << "How many resistors are connected in series: ";
                int count{};
                std::cin >>count;
                double resistance{seriesResistance(count)};
                std::cout << "Total resistance is " << resistance;
            }
            else if (resistorsHow == 2)
            {
                std::cout << "How many resistors are connected in parallel: ";
                int count{};
                std::cin >>count;
                double resistance{parallelResistance(count)};
                std::cout << "Total resistance is " << resistance;
            }
        }
    }
}
int main()
{
    char n{'y'};
    while (n == 'y' || n=='Y')
    {
        std::cout << "\n======================\n";
        std::cout << "0.exit\n"
                  << "1.converter\n"
                  << "2.physics calculator\n"
                  << "enter (0-2): ";
        int calcOrConv{};
        std::cin >> calcOrConv;
        if (calcOrConv == 1)
            converter();

        else if (calcOrConv == 2)
            physics();
        else if (calcOrConv == 0)
        {
            std::cout << "Bye!";
            return 0;
        }

        else
        {
            std::cout << "ERROR::INVALID_INPUT";
            return 0;
        }
        std::cout << "\nDo you want to use the program again y/n: ";
        std::cin >> n;
    }
    std::cout << "\nBye!\n";
    std::this_thread::sleep_for(std::chrono::milliseconds(2500));
    return 0;
}
