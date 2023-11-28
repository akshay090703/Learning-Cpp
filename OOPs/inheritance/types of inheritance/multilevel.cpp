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

class Dog : public Animal
{
};

class GermanShepherd : public Dog // Multi level inheritance
{
};

int main()
{
    GermanShepherd sheru;
    sheru.speak();

    return 0;
}