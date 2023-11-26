#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // string literals
    const char *str1 = "Clabama";
    const char *str2 = "Blabama";

    // c-strings
    char str3[] = "Alabama";
    char str4[] = "Blabama";

    str1 = "Aaac";
    str2 = "Aaaab";
    // str1[1] = 'a'; // can't modify a string literal
    // str3 = "Akshay"; // can't change where an array points to

    // Both will give -1
    cout << "Comparison 1: " << strcmp(str1, str2) << endl;
    cout << "Comparison 2: " << strcmp(str3, str4) << endl;

    cout << "Comparison 3: " << strncmp(str1, str2, 3) << endl;
    cout << "Comparison 4: " << strncmp(str3, str4, 3) << endl;

    return 0;
}