#include <iostream>
using namespace std;

const double PI = 3.14;

class Cylinder
{
private:
    // Member Variables
    double base_radius{};
    double height{};

public:
    // Constructor
    Cylinder()
    {
        base_radius = 2; // will be default values
        height = 2.0;
    }
    Cylinder(double radius_param, double height_param)
    {
        base_radius = radius_param;
        height = height_param;
    }

    // Class Methods
    double volume()
    {
        return PI * base_radius * base_radius * height;
    };
};

int main()
{
    Cylinder cylinder1(2, 10); // Object or instance of class
    // this will use the constructor to assign new values as that is more fitting now

    cout << "Volume: " << cylinder1.volume() << endl;

    return 0;
}