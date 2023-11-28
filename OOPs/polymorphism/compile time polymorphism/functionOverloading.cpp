#include <iostream>
using namespace std;

class A
{
public:
    void sayHello()
    {
        cout << "Hello from Akshay" << endl;
    }

    void sayHello(string s)
    {
        cout << "Hello!" << endl;
    }
};

int main()
{
    A obj;
    obj.sayHello(); // Function overloading

    return 0;
}