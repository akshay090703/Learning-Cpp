#include <iostream>
#include <string_view>
using namespace std;

class Dog
{
private:
    string name, breed;
    int *p_age = nullptr;

public:
    Dog() = default;
    Dog(string_view name, string_view breed, int age);
    ~Dog();

    // Setters
    // Chained calls using pointers
    // Dog *set_dog_name(string_view name)
    // {
    //     // name = name; // error
    //     this->name = name;
    //     return this;
    // };

    // Dog *set_breed(string_view breed)
    // {
    //     this->breed = breed;
    //     return this;
    // };

    // Dog *set_age(int age)
    // {
    //     *(this->p_age) = age;
    //     return this;
    // };

    // Chained calls using references
    Dog &set_dog_name(string_view name) // returning the dog instance reference
    {
        // name = name; // error
        this->name = name;
        return *this; // we are deferencing and returning these using reference
    };

    Dog &set_breed(string_view breed)
    {
        this->breed = breed;
        return *this;
    };

    Dog &set_age(int age)
    {
        *(this->p_age) = age;
        return *this;
    };

    void print_info()
    {
        cout << "Dog (" << this << ") : [ name: " << name << " ,breed: " << breed << " ,age: " << *p_age << "]" << endl;
    }
};

Dog::Dog(string_view name, string_view breed, int age)
{
    this->name = name;
    this->breed = breed;
    p_age = new int;
    *p_age = age;
    cout << "Dog constructor called for: " << name << " at " << this << endl;
};

Dog::~Dog()
{
    delete this->p_age;
    p_age = nullptr;
    cout << "Dog destructor called for: " << name << " at " << this << endl;
};

int main()
{
    Dog dog1("FLuffy", "Shepherd", 2);
    dog1.print_info();

    // chained call using pointers
    // dog1.set_dog_name("Sheero")->set_breed("German")->set_age(4);

    // chained call using references
    dog1.set_dog_name("Sheero").set_breed("Indian").set_age(3);
    // we are using dot here because we are not returning pointers but the reference to the object itself anymore and we can directly access the methods by dot notation

    dog1.print_info();

    cout << "DONE!" << endl;

    // Destructor
    return 0;
}