#include <iostream>
using namespace std;
class class1
{
    int a;

public:
    void set_Data_1(int x)
    {
        a = x;
    }
    class1(){
        cout<<"Construtor1 is being called !!!!!!"<<endl;
    }
    ~class1(){
        cout<<"Destructor1 is being called !!!!"<<endl;
    }
    void display(void)
    {
        cout << "The number of class 1 is : " << a << endl;
    }
};
class class2 
{
    int b;

public:
    void set_Data_2(int x)
    {
        b = x;
    }
    class2(){
        cout<<"Construtor2 is being called !!!!!!"<<endl;
    }
    ~class2(){
        cout<<"Destructor2 is being called !!!!"<<endl;
    }
    void display(void)
    {
        cout << "The number of class 2 is : " << b << endl;
    }
};
class class3 : virtual public class2 , virtual public class1
{
    int c;

public:
    void set_Data_3(int x)
    {
        c = x;
    }
    class3(){
        cout<<"Construtor3 is being called !!!!!!"<<endl;
    }
    ~class3(){
        cout<<"Destructor3 is being called !!!!"<<endl;
    }
    void display(void)
    {
        cout << "The number of class 3 is : " << c << endl;
    }
};

/*
Construtors in derived classes
* We can use constructor in derived classes in C++
* If base class constructor doese not have any arguments , there is no need of any construtor in derived class.
* But if there are more arguements in the base clsss constructor , derived classs need to pass arguments to hte base class construtor
* If both base and derived classes have constructors, base class construtor is executed first.
*In multiple inheritance , base classes are constructed in the order in which they appear in the class declaration.
* in mutilevel inheritance , the contructors are executed in the order of inheritance . 

SPECIAL CASE OF VIRTUAL BASE CLASS 
*  tHE constructors for virtual base classes are invoked before an nonvirtual base class.
If there are multiple virtual base are then constructed beforer the serived class constructor is executed.
* Any ono-virtual base class are then constructed before the derived class constructor is executed
*/
int main()
{
    class3 t;

    return 0;
}