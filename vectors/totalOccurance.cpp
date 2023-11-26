#include <iostream>
#include <vector>
using namespace std;

int totalOccurance(vector<int> v, int element)
{
    int occurance = 0;
    for (int el : v)
    {
        if (el == element)
        {
            occurance++;
        }
    }
    return occurance;
}

int main()
{
    vector<int> v(7);

    int i = 0;
    while (i < v.size())
    {
        cin >> v[i];
        i++;
    }

    int element;
    cout << "Enter a number to calculate: ";
    cin >> element;

    cout << "The total occurance of number is: " << totalOccurance(v, element);

    return 0;
}