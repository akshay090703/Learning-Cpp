#include <iostream>
using namespace std;

int main()
{
    cout << "AP: 4, 7, 10, 13, 16....\n";
    int num;
    cout << "Enter the number of terms to be printed: ";
    cin >> num;

    int n = 0;
    cout << "No. of terms from AP: ";
    for (int i = 4; n < num; i += 3)
    {
        cout << i << " ";
        n++;
    }

    // alternative: an = a + (n-1)*d
}