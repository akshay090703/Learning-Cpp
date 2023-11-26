#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(5);

    int i = 0;
    while (i < v.size())
    {
        cin >> v[i];
        i++;
    }

    int j = 0;
    while (j < v.size())
    {
        cout << v[j] << " ";
        j++;
    }

    return 0;
}