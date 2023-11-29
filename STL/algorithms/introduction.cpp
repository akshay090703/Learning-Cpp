#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(10);

    cout << "Finding 5-> " << binary_search(v.begin(), v.end(), 5) << endl;
    cout << "Finding 6-> " << binary_search(v.begin(), v.end(), 6) << endl;

    cout << "Lower Bound-> " << lower_bound(v.begin(), v.end(), 5) - v.begin() << endl;
    cout << "Upper Bound-> " << upper_bound(v.begin(), v.end(), 5) - v.begin() << endl;

    int a = 3;
    int b = 5;

    cout << "Max-> " << max(a, b) << endl;
    cout << "Min-> " << min(a, b) << endl;
    swap(a, b); // can also be done with all the data structures that we studied
    cout << "a-> " << a << " b-> " << b << endl;

    string str = "Akshay";
    reverse(str.begin(), str.end());
    cout << "Reversed string-> " << str << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After rotation: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    sort(v.begin(), v.end()); // uses intro sort(combination of quick sort, heap sort and insertion sort)
    cout << "After sorting: " << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}