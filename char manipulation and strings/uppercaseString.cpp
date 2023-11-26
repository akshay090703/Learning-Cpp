#include <iostream>
using namespace std;

int main()
{
    char cstr[] = "My name is Akshay Kumar Pandey.";
    char ansStr[sizeof(cstr) / sizeof(cstr[0])];
    cout << "The original string: " << cstr << endl;

    for (size_t i = 0; i < (sizeof(cstr) / sizeof(cstr[0])); ++i)
    {
        ansStr[i] = toupper(cstr[i]);
    }

    cout << "The uppercase string: " << ansStr << endl;

    return 0;
}