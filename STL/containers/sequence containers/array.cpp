#include <iostream>
#include <array>
using namespace std;

int main()
{
    int basic_arr[4] = {1, 2, 3, 4};

    array<int, 4> stl_arr = {1, 2, 3, 4};
    // basically stl array also uses the basic array for implementation and has loads of inbuilt fns

    int size = stl_arr.size();

    for (int i = 0; i < size; i++)
    {
        cout << stl_arr[i] << endl;
    }

    cout << "Element at 2nd index-> " << stl_arr.at(2) << endl;

    cout << "Empty or not-> " << stl_arr.empty() << endl;

    cout << "First element-> " << stl_arr.front() << endl;
    cout << "Last element-> " << stl_arr.back() << endl;

    return 0;
}