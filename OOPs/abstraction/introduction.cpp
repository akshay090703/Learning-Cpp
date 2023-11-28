#include <iostream>

// Abstract base class
class Vehicle
{
public:
    // Pure virtual function for displaying information
    virtual void displayInfo() const = 0;

    // Virtual destructor
    virtual ~Vehicle() {}
};

// Concrete derived classes
class Car : public Vehicle
{
public:
    void displayInfo() const override
    {
        std::cout << "This is a Car." << std::endl;
    }
};

class Bicycle : public Vehicle
{
public:
    void displayInfo() const override
    {
        std::cout << "This is a Bicycle." << std::endl;
    }
};

int main()
{
    // Using abstraction to work with different vehicles through a common interface
    Vehicle *car = new Car();
    Vehicle *bicycle = new Bicycle();

    car->displayInfo();     // Calls the displayInfo() method of the Car class
    bicycle->displayInfo(); // Calls the displayInfo() method of the Bicycle class

    delete car;
    delete bicycle;

    return 0;
}
