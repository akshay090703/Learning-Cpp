#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> maxHeap; // based on max heap

    priority_queue<int, vector<int>, greater<int>> minHeap; // based on min heap

    maxHeap.push(1);
    maxHeap.push(5);
    maxHeap.push(4);
    maxHeap.push(3);
    maxHeap.push(4);

    int n = maxHeap.size();
    for (int i = 0; i < n; i++)
    {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }
    cout << endl;

    minHeap.push(1);
    minHeap.push(5);
    minHeap.push(4);
    minHeap.push(3);
    minHeap.push(4);

    int m = minHeap.size();
    for (int i = 0; i < m; i++)
    {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    cout << endl;

    cout << "Empty or not: " << minHeap.empty() << endl;

    return 0;
}