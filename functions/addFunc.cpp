#include <iostream>
using namespace std;

int addition(int x, int y)
{
    return x + y;
}

void fun(string name)
{
    cout << "Hello, " << name << "!" << endl; // prints Hello, John!
}

int main()
{
    fun("Akshay");

    int x = addition(5, 8);
    cout << x;
    return 0;
}