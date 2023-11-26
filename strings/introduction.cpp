#include <iostream>
using namespace std;

int main()
{
    string str = "college";
    // string str1 ("studies", 4);
    string str1("studies", 1, 3);

    cout << str << " " << str1 << endl;

    string str2;
    // cin >> str2;
    getline(cin, str2);
    cout << str2 << endl;

    return 0;
}