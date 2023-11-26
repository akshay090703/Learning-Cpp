#include <iostream>
using namespace std;

int main()
{
    // Non const reference
    cout << "Non-const reference: " << endl;
    int age = 20;
    int &age_ref = age;
    age_ref = 21; // can be modified

    cout << "age: " << age << endl;
    cout << "ref_age: " << age_ref << endl;

    // const reference
    cout << "const reference: " << endl;
    int age2 = 20;
    const int &age_ref2 = age;
    // age_ref2 = 21; // cannot be modified
    // will give a compiler error

    age2 = 21; // still can be changed using the original variable

    cout << "age2: " << age2 << endl;
    cout << "ref_age2: " << age_ref2 << endl;

    // Simulating const reference behaviour using pointers
    const int *ptr = &age2;
    // *ptr = 22; // cannot be modified

    age2 = 22;

    cout << *ptr << endl;

    cout << "Program ends peacefully" << endl;

    return 0;
}