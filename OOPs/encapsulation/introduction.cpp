#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int height; // Fully Encapsulated class

public:
    int getAge()
    {
        return this->age;
    }
};

int main()
{
    Student firstStudent;

    return 0;
}