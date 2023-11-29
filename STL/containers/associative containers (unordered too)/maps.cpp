#include <iostream>
#include <map>
using namespace std;

int main()
{
    map<int, string> m;

    m[3] = "Pandey";
    m[2] = "Kumar";
    m[1] = "Akshay";

    m.insert({8, "Viduuuu"});

    cout << "Before Erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 8-> " << m.count(8) << endl;
    cout << "Finding 10-> " << m.count(10) << endl;

    m.erase(2);
    cout << "After Erase: " << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    // auto it = m.find(3);
    auto it = m.find(8); // will return the pointer to the element
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << (*i).second << endl;
    }

    return 0;
}