#include <iostream>
using namespace std;

class Animal
{
public:
    int age, weight;

public:
    void speak()
    {
        cout << "Speaking" << endl;
    }
};

class Dog : public Animal // Single Inheritance
{
};

int main()
{
    Dog d;
    d.speak();

    return 0;
}