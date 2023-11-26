#include <iostream>
using namespace std;

int main() {
    int x = 4, y = 10;

    cout<< "Post Increment" << '\n';
    cout<< x << endl;
    cout<< x++ << endl;
    cout<< x << endl;

    cout<< "Pre Increment" << endl;
    cout<< y << endl;
    cout<< ++y << endl;
    cout<< y << endl;
}