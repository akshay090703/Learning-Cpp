#include <iostream>
using namespace std;

int main()
{
    char message[6] = {'H', 'e', 'l', 'l', 'o'};
    message[2] = 'p';

    // for (auto c : message)
    // {
    //     cout << c;
    // }

    // If a character array is null terminated, it is called as C-String

    cout << message << endl;

    char message1[] = "Hello";
    cout << message1 << endl;
    cout << message1[2] << endl;

    return 0;
}