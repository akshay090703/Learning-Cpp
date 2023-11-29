#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<string> s; // Last in, First out (LIFO)

    s.push("Akshay");
    s.push("Kumar");
    s.push("Pandey");

    cout << "Top element: " << s.top() << endl;

    s.pop();

    cout << "Top element: " << s.top() << endl;

    cout << "Size of stack-> " << s.size() << endl;

    cout << "Empty or not-> " << s.empty() << endl;

    return 0;
}