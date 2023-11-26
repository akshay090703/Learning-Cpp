#include <iostream>
using namespace std;

int main()
{
    // 1. Wild Pointer
    int *ptr1;
    cout << ptr1 << " " << *ptr1 << endl;

    // 2. NULL Pointer
    int *ptr2 = NULL;
    int *ptr3 = 0;         // another way
    int *ptr4 = (int)'\0'; // Null character in ASCII
    // we can't dereference it and will get a runtime error
    // cout << ptr2 << " " << *ptr2 << endl;
    // cout << ptr3 << " " << *ptr3 << endl;
    // cout << ptr4 << " " << *ptr4 << endl;

    // 3. Dangling Pointer
    int *ptr5 = NULL;
    {
        int x = 10;
        ptr5 = &x;
    }
    cout << ptr5 << " " << *ptr5 << endl;

    // 4. Void Pointer
    float f = 10.2;
    int i = 14;
    void *ptr6 = &f;
    ptr6 = &i;
    // these pointers can't be dereferenced directly
    // cout<< ptr6 << " " <<*ptr6<< endl;
    int *integerPointer = (int *)ptr6;
    cout << integerPointer << " " << *integerPointer << endl;

    return 0;
}