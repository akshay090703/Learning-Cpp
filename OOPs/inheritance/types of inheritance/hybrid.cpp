#include <iostream>
using namespace std;

// Hybrid Inheritance
class A
{
public:
    void printingA()
    {
        cout << "Inside A" << endl;
    }
};

class D
{
public:
    void printingD()
    {
        cout << "Inside D" << endl;
    }
};

class B : public A
{
public:
    void printingB()
    {
        cout << "Inside B" << endl;
    }
};

class C : public A, public D
{
public:
    void printingC()
    {
        cout << "Inside C" << endl;
    }
};

int main()
{
    C classC;
    classC.printingD();
    classC.printingA();

    B classB;
    classB.printingA();

    return 0;
}