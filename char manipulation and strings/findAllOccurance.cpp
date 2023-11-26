#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    const char *str = "Try not. Do, or Do noT. There is no try.";
    char target = 'T';
    const char *result = str;
    size_t iterations = 0;

    while ((result = strchr(result, target)) != nullptr)
    {
        cout << "Found " << target << " starting at " << result << endl;

        result++;
        iterations++;
    }

    return 0;
}