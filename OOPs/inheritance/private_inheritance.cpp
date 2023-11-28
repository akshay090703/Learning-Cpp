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

private:
    int weight;

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
class Male : private Human // private access modifier
{
public:
    string color;
    // the public and protected members will still be accessible in the child class while private members will not be accessible here

    void sleep()
    {
        cout << "Male sleeps" << endl;
    }

    int get_height()
    {
        return this->height;
    }

    void set_height(int h)
    {
        this->height = h;
    }

    // int get_weight()
    // {
    //     return this->weight; // private members won't even be accessible in the child class
    // }
};

int main()
{
    Male obj1;
    cout << obj1.color << endl;
    // nothing would be accessible now as the mode is private
    // cout << obj1.getAge() << endl;
    // cout << obj1.height << endl;
    // obj1.setWeight(10);
    obj1.set_height(12);
    cout << obj1.get_height() << endl; // getter and setter functions will still work
    obj1.sleep();
    // cout << obj1.get_weight() << endl; // won't work as weight is in private which isn't accessible in the child class, we would have to make a getter in the parent class to access the weight variable now

    return 0;
}