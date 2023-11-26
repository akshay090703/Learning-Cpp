#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v(4);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    v.insert(v.begin() + 1, 7);
    v.erase(v.end() - 2); // deletes last element -> (v.end()-1)

    for (int element : v)
    {
        cout << element << " ";
    }
}