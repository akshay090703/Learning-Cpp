#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> v)
{
    for (int i = 0; i < (v.size() - 1); i++)
    {
        if (v[i] > v[i + 1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> v(6);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    string message = isSorted(v) ? "sorted." : "NOT sorted.";

    cout << "The given vector is " << message;

    return 0;
}