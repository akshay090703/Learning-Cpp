#include <iostream>
#include <string_view>
using namespace std;

class Dog
{
private:
    // Class Members
    string name, breed;
    int *ptr_age = nullptr;

public:
    Dog() = default;
    Dog(string_view name_param, string_view breed_param, int age_param);
    ~Dog(); // Destructor declaration
};

Dog::Dog(string_view name_param, string_view breed_param, int age_param)
{
    name = name_param;
    breed = breed_param;
    ptr_age = new int; // Dynamically allocated memory
    *ptr_age = age_param;
    cout << "Dog constructor for " << name << endl;
};

// Destructor definition
Dog::~Dog()
{
    delete ptr_age;
    ptr_age = nullptr;
    cout << "Dog destructor called for " << name << endl;
}

void some_func()
{
    Dog *p_dog = new Dog("Sheroo", "Indie", 10);
    delete p_dog;
    p_dog = nullptr;
}

int main()
{
    Dog dog1("Doggy1", "Shepherd", 2);
    Dog dog2("Doggy2", "Shepherd", 2);
    Dog dog3("Doggy3", "Shepherd", 2);
    Dog dog4("Doggy4", "Shepherd", 2);

    cout << "DONE!" << endl;

    return 0;
}