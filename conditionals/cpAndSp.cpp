#include <iostream>
using namespace std;

int main()
{
    int cp, sp;
    cout << "Enter the cost price of the product: ";
    cin >> cp;

    cout << "Enter the selling price of the product: ";
    cin >> sp;

    if (cp > sp)
        cout << "LOSS! of " << cp - sp;
    else if (cp < sp)
        cout << "PROFIT! of " << sp - cp;
    else
        cout << "No profit or loss";
}