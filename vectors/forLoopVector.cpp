#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // vector<int> v;
    vector<int> v(5);

    for (int i = 0; i < 5; i++)
    {
        // int element;
        cin >> v[i];
        // v.push_back(element);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}