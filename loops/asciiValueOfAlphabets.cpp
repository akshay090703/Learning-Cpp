#include <iostream>
using namespace std;

int main()
{
    cout << "Printing ASCII values with all the alphabets: \n";
    for (int i = 65; i <= 90; i++)
    {
        char c = (char)i;
        cout << i << " " << c << endl;
    }
}