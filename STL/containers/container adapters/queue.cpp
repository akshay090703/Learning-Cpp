#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<string> q; // First in, First out (FIFO)

    q.push("Akshay");
    q.push("Kumar");
    q.push("Pandey");

    cout << "First element-> " << q.front() << endl;

    cout << "Size before pop-> " << q.size() << endl;
    q.pop(); // removes first element

    cout << "First element-> " << q.front() << endl;

    cout << "Size after pop-> " << q.size() << endl;

    return 0;
}