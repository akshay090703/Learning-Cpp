#include <iostream>
using namespace std;

int main()
{
    float radius;
    cout << "Give the radius of the sphere: ";
    cin >> radius;

    cout << "\nThe volume of the sphere is: " << (4 / 3) * (3.14) * (radius * radius * radius);
}