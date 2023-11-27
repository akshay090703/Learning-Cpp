#include <iostream>
using namespace std;

class Dog
{
    string m_name; // member variable
};

struct Cat
{
    string m_name;
};
// We can add both public and private to both of them manually and they will work the same

struct Point
{
    double x;
    double y;
};

void print_double(const Point &point)
{
    cout << "Point [ x: " << point.x << ", y: " << point.y << " ]" << endl;
}

int main()
{

    Dog dog1;
    Cat cat1;

    // dog1.m_name = "Fluffy"; // error as members private by default
    cat1.m_name = "Fluffy"; // no error as members public by default

    // cout << dog1.m_name << endl; // not accessible
    cout << cat1.m_name << endl;

    Point point1;
    point1.x = 2.34;
    point1.y = 5.67;
    print_double(point1);

    return 0;
}