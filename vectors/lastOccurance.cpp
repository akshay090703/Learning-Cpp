#include <iostream>
#include <vector>
using namespace std;

int lastOccurance(vector<int> v, int num)
{
    int length = v.size();
    for (int i = length - 1; i >= 0; i--)
    {
        if (v[i] == num)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    vector<int> v(7);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    int num;
    cout << "Give number to search: ";
    cin >> num;

    cout << "Given number is at index " << lastOccurance(v, num);
}