#include "math.h"
#include "phy.h"
#include <iostream>

template <typename T>
Vector3D<T> totalForce(Body<T> *body, const Vector3D<T> &force)
{
    body->totalForce = VecAdd(body->totalForce, force);
    return body->totalForce;
}

template <typename T>
void set0(Body<T> *body)
{
    body->totalForce.X = 0;
    body->totalForce.Y = 0;
    body->totalForce.Z = 0;
}

template <typename T, typename G>
Vector3D<T> gravity(Body<T> *body, G gravityConst = 9.8)
{
    if (body->mode == Mode::Dynamic)
    {
        Vector3D<T> gravityForce{0, -body->mass * gravityConst, 0};
        body->totalForce = VecAdd(gravityForce, body->totalForce);
        return body->totalForce;
    }
    return body->totalForce;
}

template <typename T>
void motion(Body<T> *body, T time)
{
    if (body->mode == Mode::Static)
        return;

    body->acceleration = ScalMult(body->totalForce, body->inverseMass);
    body->speed = VecAdd(body->speed, ScalMult(body->acceleration, time));
    body->location_size.location = VecAdd(body->location_size.location, ScalMult(body->speed, time));
}

int main()
{
    Body<double> sphere{
        {{0.0, 100.0, 0.0}, {1.0, 1.0, 1.0}}, // location_size (location, size)
        {0.0, 0.0, 0.0},                      // speed
        {0.0, 0.0, 0.0},                      // acceleration
        {0.0, 0.0, 0.0},                      // totalForce
        2.0,                                  // mass
        0.5,                                  // inverseMass (1.0 / 2.0)
        {0.8, 0.2, 2700.0},                   // properties
        Mode::Dynamic,                        // mode
        Material::Metal                       // material
    };

    const double deltaTime{0.1};
    const int totalFrames{10};

    std::cout << "--- Starting Simulation ---\n";
    std::cout << "Frame 0 | Position Y: " << sphere.location_size.location.Y 
              << " | Speed Y: " << sphere.speed.Y << "\n\n";

    for (int frame{1}; frame <= totalFrames; ++frame)
    {
        set0(&sphere);
        gravity(&sphere, 9.81);
        motion(&sphere, deltaTime);

        std::cout << "Frame " << frame << " (t=" << frame * deltaTime << "s)"
                  << " | Position Y: " << sphere.location_size.location.Y 
                  << " | Speed Y: " << sphere.speed.Y << "\n";
    }

    return 0;
}
