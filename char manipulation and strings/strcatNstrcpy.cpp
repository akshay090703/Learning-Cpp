#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char dest[50] = "Hello "; // size should be big enough for both the arrays
    char src[50] = "World!";

    // strcat(dest, src); // concatinates
    strncat(dest, src, 3); // concatinates upto n chars
    cout << "dest: " << dest << endl;

    const char *src1 = "Hello";
    char dest1[] = "abcdef\0";
    // strcpy(dest1, src1); // replaces the 1st string with 2nd
    strncpy(dest1, src1, 4); // only replace the n number of chars from 2nd to 1st
    cout << "dest1: " << dest1 << endl;

    return 0;
}