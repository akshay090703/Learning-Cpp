#include <iostream>
using namespace std;

// Parent class
class Human
{
public:
    int height;

    // private:
    //     int age;
protected:
    int age;
    int weight;

    // private:
    //     int weight;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

// Child class
class Male : public Human // public access modifier
{
public:
    string color;

    void sleep()
    {
        cout << "Male sleeps" << endl;
    }

    int get_weight()
    {
        return this->weight; // when in private, weight won't be accessible even here
    }
};

int main()
{
    Male obj1;
    // cout << obj1.age << endl; // not accessible as age is in private access modifier
    // cout << obj1.age; // can't be accessed as it is in protected class modifier
    cout << obj1.color << endl;
    cout << obj1.getAge() << endl;
    cout << obj1.height << endl;
    obj1.setWeight(10);
    obj1.sleep();
    cout << obj1.get_weight() << endl;

    return 0;
}