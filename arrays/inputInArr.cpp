#include <iostream>
using namespace std;

int main()
{
    char alphabets[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cin >> alphabets[i];
    // }

    for (char &ele : alphabets)
    {
        cin >> ele;
    }

    for (int i = 0; i < 5; i++)
    {
        cout << alphabets[i] << " ";
    }

    return 0;
}