#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class human
{
public:
    int height;
    int weight;
    int age;
    void sleep()
    {
        cout << "male is sleeping " << endl;
    }
};
class male : public human
{
public:
    string colour;
    male(string colour, int age = -1, int weight = -1, int height = -1)
    {
        this->age = age;
        this->weight = weight;
        this->height = height;
        this->colour = colour;
    }
    void sleep()
    {
        cout << "male is sleeping " << endl;
    }
};

int main()
{
    male m("red", 23, 10);
    human h;
    h.sleep();
    cout << "age is    : " << m.age << endl;
    cout << "weight is : " << m.weight << endl;
    cout << "height is : " << m.height << endl;
    // cout << "colour is : " << m.colour << endl;
    // m.sleep();

    return 0;
}