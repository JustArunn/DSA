#include <iostream>
using namespace std;

/*

 THIS IS COMPLETE DATA STRACTURE CODE FILE MADE BY - ARUN KUMAR

 E-mail : just.arunn@gmail.com

 instagram : just.arunn GitHub : justArunn
 
*/


class animal
{
public:
    string name;
    int age;
    void speak()
    {
        cout << "speaking" << endl;
    }
};

class dog : public animal
{
    public:
        void bark()
        {
            cout<<"dog is barking "<<endl;
        }
};

class germanShephered : public dog
{
    public:
        germanShephered(string name,int age = -1){
            this ->name = name;
            this->age = age;
        }
        void type()
        {
            cout<<"germanShepered is a type of dog "<<endl;
        }
};

int main()
{
    germanShephered g("money", 23);
    cout<<g.name<<endl;
    cout<<g.age<<endl;
    g.speak();

    return 0;
}