#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // normal c-string
    const char msg1[] = "The sky is blue.";

    // Array decayed into pointer
    const char *msg2 = "The sky is blue.";

    cout << "strlen(msg1): " << strlen(msg1) << endl;
    cout << "strlen(msg2): " << strlen(msg2) << endl;

    cout << "sizeof(msg1): " << sizeof(msg1) << endl; // will include null as well
    cout << "sizeof(msg2): " << sizeof(msg2) << endl;
    // gives the size of the pointer variable

    return 0;
}