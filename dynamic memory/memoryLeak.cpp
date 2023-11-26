#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(69);

    int num = 76;
    // ptr = new int(55); // memory of 69 leaked
    ptr = &num; // memory of 69 leaked

    cout << "ptr= " << ptr << endl;
    cout << "*ptr= " << *ptr << endl;

    {
        int *ptr1 = new int{25};
    }
    // Memory with int 25 is leaked

    cout << "Program finished peacefully!" << endl;

    return 0;
}