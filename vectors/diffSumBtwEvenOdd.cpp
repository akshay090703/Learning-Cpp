#include <iostream>
#include <vector>
using namespace std;

int diffInSum(vector<int> v)
{
    int evenSum = 0, oddSum = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenSum += v[i];
        }
        else
            oddSum += v[i];
    }
    int diff = evenSum - oddSum;
    if (diff < 0)
        diff *= -1;
    return diff;
}

int main()
{
    vector<int> v(8);

    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }

    cout << "The difference between odd and even indices: " << diffInSum(v);

    return 0;
}