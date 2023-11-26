#include <iostream>
using namespace std;

// Different Signature for each function
int add(int a, int b) { return a + b; }

double add(double a, double b) { return a + b; }

string add(string a, string b, string c) { return a + b + c; }

int main()
{
    int a = 10, b = 20;
    double x = 1.23, y = 20.12;
    string p = "Akshay ", q = "Kumar ", r = "Pandey";

    cout << add(a, b) << endl;
    cout << add(x, y) << endl;
    cout << add(p, q, r) << endl;

    return 0;
}