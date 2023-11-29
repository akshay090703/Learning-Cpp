#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s; // ordered set

    s.insert(5);
    s.insert(6);
    s.insert(3);
    s.insert(5); // will come only ones
    s.insert(1);
    s.insert(6);
    s.insert(2); // time complexity: O(logn)

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    set<int>::iterator it = s.begin();
    it++;
    s.erase(it); // deletes one element

    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "5 or not-> " << s.count(5) << endl; // tells if a element is present or not
    cout << "-5 or not-> " << s.count(-5) << endl;

    set<int>::iterator itr = s.find(5); // will return the pointer at which the element is present
    cout << "element: " << *itr << endl;

    return 0;
}