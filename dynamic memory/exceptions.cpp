#include <iostream>
using namespace std;

int main()
{
    // throws an exception
    // int *data = new int[100000000000000000];

    // throws an exception
    // for (int i = 0; i < 100000000; ++i)
    // {
    //     int *data = new int[10000000];
    // }

    // try catch block
    // for (int i = 0; i < 100000000; ++i)
    // {
    //     try
    //     {
    //         int *data = new int[10000000];
    //     }
    //     catch (exception &e)
    //     {
    //         cout << "Something went wrong: " << e.what() << endl;
    //         throw runtime_error("Program stopped!");
    //     }
    // }

    // using nothrow keyword
    for (int i = 0; i < 10000; ++i)
    {
        int *data = new (nothrow) int[10000000];

        if (data != nullptr)
        {
            std::cout << "Data Allocated" << endl;
        }
        else
        {
            std::cout << "Memory allocation failed!" << endl;
        }
    };

    std::cout << "Program ending well" << endl;

    return 0;
}