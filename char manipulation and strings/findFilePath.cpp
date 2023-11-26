#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char input[] = "/home/user/hello.cpp";
    char *output = strrchr(input, '/');

    if (output)
    {
        cout << output + 1 << endl;
    }

    return 0;
}