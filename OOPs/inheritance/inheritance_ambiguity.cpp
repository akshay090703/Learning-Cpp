#include <iostream>
using namespace std;

class A
{
public:
    void func()
    {
        cout << "A::func()" << endl;
    }
};

class B
{
public:
    void func()
    {
        cout << "B::func()" << endl;
    }
};

class C : public A, public B
{
};

int main()
{
    C obj;
    // obj.func(); // error as compiler won't know which function to choose

    // using scope resolution operator
    obj.A::func(); // to get class A function
    obj.B::func(); // to get class B function

    return 0;
}