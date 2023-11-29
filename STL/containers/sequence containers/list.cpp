#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> l;

    list<int> copy_list(l); // copy list l

    list<int> n(5, 100);
    for (int i : n)
    {
        cout << i << " ";
    }
    cout << endl;

    l.push_back(1);
    l.push_front(2); // same pop functions too

    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin()); // deletes one element
    cout << "after erase: " << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size: " << l.size() << endl;

    return 0;
}