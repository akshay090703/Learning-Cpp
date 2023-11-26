#include <iostream>
using namespace std;

int main()
{
    // char *ptr = "Hello World!";
    const char *ptr = "Hello World!";

    cout << ptr << endl;
    cout << *ptr << endl;

    // *ptr[3] = 'p'; // not allowed

    return 0;
}