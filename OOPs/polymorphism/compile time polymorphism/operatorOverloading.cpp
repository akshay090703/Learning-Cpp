#include <iostream>
using namespace std;

class B
{
public:
    int a, b;

    int add()
    {
        return a + b;
    }

    // Operator Overloading
    void operator+(B &obj)
    {
        // int value1 = this->a;
        // int value2 = obj.a;
        // cout << "output " << value2 - value1 << endl;
        cout << "Hello!" << endl;
    }

    void operator()()
    {
        cout << "This is an example of function call operator overloading." << this->a << endl;
    }
};

int main()
{
    B obj1, obj2;
    obj1.a = 4;
    obj2.a = 7;

    // obj1 + obj2; // output will be 3
    // binary operator so first one will be current object and second one will be treated as input argument
    obj1 + obj2; // output will be Hello!
    // so basically here whenever the + operator will be used with these classes, it will call the function from the class and whatever is there in the body of the fn will be executed

    obj1();
    obj2();

    return 0;
}