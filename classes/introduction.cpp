#include <iostream>
using namespace std;

const double PI = 3.14;

// class
class Cylinder
{
public:
    // Member functions
    double volume()
    {
        return PI * base_radius * base_radius * height;
    }

    // private:
    // Member variables
    double base_radius{};
    double height{};
};

int main()
{
    Cylinder cylinder1;
    // All public things are accessible
    cout << "Volume: " << cylinder1.volume() << endl;

    // Private member won't be accessible and will give compiler error
    // cout << "Radius: " << cylinder1.base_radius << endl;
    // cout << "Height: " << cylinder1.height << endl;

    // Changing the data variables
    cylinder1.base_radius = 10;
    cylinder1.height = 12;
    cout << "Volume: " << cylinder1.volume() << endl;

    return 0;
}