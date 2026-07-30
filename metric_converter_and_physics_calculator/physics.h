#pragma once
#include "physics.h"

    // Kinematics
double averageVelocity(double distance, double time);
double acceleration(double initialVelocity, double finalVelocity, double time);
double displacement(double initialVelocity, double acceleration, double time);
double finalVelocity(double initialVelocity, double acceleration, double time);
double accelerationFromdisplacement(double displacement,double initialVelocity,double time);

// Dynamics
double NewtonLaw2(double mass, double acceleration);
double weight(double mass);
double frictionForce(double frictionCoeff, double normalForce);
double centripetalForce(double mass, double velocity, double radius);
double centripetalForceAng(double mass, double angularVelocity, double radius);

// Work, Energy, & Power
double work(double force, double distance, double angle);
double kinEnergy(double mass, double velocity);
double GravPotentialEnergy(double mass, double height);
double ElasticPotEn(double springConst, double displacement);
double mechanicalPower(double work, double time);
double momentum(double mass, double velocity);
double impulse(double force, double time);

// Electricity
double voltage(double current, double resistance);
double electricPower(double voltage, double current);
double electricPowerC(double current,double resistance);
double seriesResistance(int count);
double parallelResistance(int count);
