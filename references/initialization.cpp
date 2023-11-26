#include <iostream>
using namespace std;

int main()
{
    int int_data = 33;
    double double_data{55};

    // References
    int &ref_int_data = int_data;
    double &ref_double_data = double_data;

    int_data = 14;
    double_data = 45.23;

    cout << ref_int_data << endl;
    cout << ref_double_data << endl;

    ref_int_data = 10;
    ref_double_data = 21.123;

    cout << int_data << endl;
    cout << double_data << endl;

    return 0;
}