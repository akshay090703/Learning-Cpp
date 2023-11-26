#include <iostream>
using namespace std;

int addition(int x, int y); // needed

int main()
{
    int result = addition(12, 4);
    cout << result;
}

int addition(int x, int y)
{
    return x + y;
}