#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;

    vector<int> a(5, 1); // size is 5 and all elements initialized with 1

    vector<int> copyVec(a); // copies vector a

    for (int i : copyVec)
    {
        cout << i << " ";
    }
    cout << endl;

    v.push_back(1);
    v.push_back(2);

    cout << "Size-> " << v.size() << endl;
    cout << "Capacity-> " << v.capacity() << endl;

    v.push_back(3);

    cout << "Size-> " << v.size() << endl;
    cout << "Capacity-> " << v.capacity() << endl;

    cout << v.at(2) << endl;

    cout << "front-> " << v.front() << endl;
    cout << "end-> " << v.back() << endl;

    v.pop_back();
    cout << "end-> " << v.back() << endl;

    return 0;
}