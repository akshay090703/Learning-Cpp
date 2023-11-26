#include <iostream>
using namespace std;

// Pass by pointer
void say_age(int *age); // Declaration or header

int main()
{
    int age(23); // local
    cout << "age (before call): " << age << " &age: " << &age << endl;
    say_age(&age); // Argument
    cout << "age (after call): " << age << " &age: " << &age << endl;

    return 0;
}

void say_age(int *age) // Parameter
{
    ++(*age);
    cout << "Hello, hou are " << *age << " years old! &age: " << age << endl;
}