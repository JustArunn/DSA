#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class addWeight
{
    int weight;

public:
    //constractor
    addWeight(int total = 0)
    {
        weight = total;
    }
    void printvalue()
    {
        cout << " weight is : " << weight << endl;
    }
    //overloading oprator
    addWeight operator+(addWeight m)
    {
        addWeight temp;
        temp.weight = weight + m.weight;
        return weight;
    }
};

int main()
{

    addWeight person1(60);
    addWeight person2(40);
    addWeight total;

    total = person1 + person2;
    total.printvalue();
    return 0;
}