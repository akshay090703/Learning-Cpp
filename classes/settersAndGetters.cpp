#include <iostream>
using namespace std;

const double PI = 3.14;

class Cylinder
{
private:
    // Member Variables
    double base_radius;
    double height;

public:
    // Constructors
    Cylinder() = default;
    Cylinder(double r, double h)
    {
        base_radius = r;
        height = h;
    }

    // Getter function
    double get_base_radius()
    {
        return base_radius;
    }
    double get_height()
    {
        return height;
    }

    // Setter functions
    void set_base_radius(double r)
    {
        base_radius = r;
    }
    void set_height(double h)
    {
        height = h;
    }

    // Method
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

int main()
{
    Cylinder cylinder1(2, 3);
    cout << "Base radius: " << cylinder1.get_base_radius() << endl;
    cout << "Height: " << cylinder1.get_height() << endl;

    cout << "Volume: " << cylinder1.volume() << endl;

    cylinder1.set_base_radius(10);
    cylinder1.set_height(10);
    cout << "Volume After change: " << cylinder1.volume() << endl;

    return 0;
}