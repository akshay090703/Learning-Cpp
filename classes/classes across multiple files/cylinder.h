#include "constants.h"

class Cylinder
{
private:
    // Class Members
    double radius, height;

public:
    // Constructors
    Cylinder() = default;
    Cylinder(double r, double h);

    // Getter and Setter functions
    double get_radius();

    double get_height();

    void set_radius(double r);

    void set_height(double h);

    // Class Method Prototype
    double volume();
};
