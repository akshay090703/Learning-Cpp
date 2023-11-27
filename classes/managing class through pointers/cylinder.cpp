#include "cylinder.h"

// Implementations of cylinder class
Cylinder::Cylinder(double r, double h)
{
    radius = r;
    height = h;
};

// Getter and Setter functions
double Cylinder::get_radius()
{
    return radius;
};

double Cylinder::get_height()
{
    return height;
};

void Cylinder::set_radius(double r)
{
    radius = r;
};

void Cylinder::set_height(double h)
{
    height = h;
};

// Class Functions
double Cylinder::volume()
{
    return PI * radius * radius * height;
};