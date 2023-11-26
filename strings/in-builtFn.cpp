#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{

    // string str = "hello";
    // string str1 = "world";

    // reverse(str.begin(), str.end());
    // cout << str.substr(0, 3) << endl;
    // cout << str + str1 << endl;

    // char s1[20] = "Akshay";
    // char s2[20] = "Pandey";
    // strcat(s1, s2);

    // cout << s1 << endl;

    string st1 = "abcd";
    char ch = 'f';
    st1.push_back(ch);
    cout << st1 << endl;

    string s1 = "abcde";
    cout << s1.length() << endl;

    char chArr[20] = "abcgds";
    cout << strlen(chArr) << endl;

    int num = 232;
    string str = to_string(num);
    str += "1";
    cout << str[1] << endl;

    return 0;
}