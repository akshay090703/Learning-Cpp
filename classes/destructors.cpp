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

// void some_func(Dog dog_param)
// {
//     // Dog my_dog("Sheroo", "Indie", 10);
// }

void some_func()
{
    Dog *p_dog = new Dog("Sheroo", "Indie", 10);
    // As the pointer will not die on its own here so the destructor won't be called because the object will still be alive
    // SO to call the destructor we can delete the dynamically allocated memory which would end the life of the object too
    delete p_dog;
    p_dog = nullptr;
}

int main()
{
    // Dog my_dog("Sheroo", "Indie", 10);
    // some_func(my_dog);
    some_func();

    cout << "DONE!" << endl;

    return 0;
}