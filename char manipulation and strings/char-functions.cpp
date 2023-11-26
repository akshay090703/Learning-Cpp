#include <iostream>
using namespace std;

int main()
{

    char alphabet = 'c';

    cout << "c is alphanumeric: " << isalnum(alphabet) << endl;
    cout << "c is alphabet: " << isalpha(alphabet) << endl;
    cout << "c is digit: " << isdigit(alphabet) << endl;
    cout << "  is blank: " << isblank(' ') << endl;

    return 0;
}