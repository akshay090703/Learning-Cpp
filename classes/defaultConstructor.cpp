#include <iostream>
using namespace std;

const double PI = 3.14;

class Cylinder
{
private:
    double base_radius;
    double height;

public:
    // Constructor
    Cylinder() = default; // Short Default Constructor syntax
    Cylinder(double r, double h)
    {
        base_radius = r;
        height = h;
    };

    // Methods
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }
};

int main()
{
    // Cylinder cylinder1(1, 2);
    Cylinder cylinder1;
    cout << "Volume: " << cylinder1.volume() << endl;

    return 0;
}