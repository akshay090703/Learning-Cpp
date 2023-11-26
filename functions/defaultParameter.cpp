#include <iostream>
using namespace std;

void sum(int x, int y = 10, int z = 0)
{
    cout << x << " + " << y << " + " << z << " = " << x + y + z;
}

int main()
{
    sum(12, 1);
    return 0;
}