#include <iostream>
using namespace std;
/*
Syntax for intialization list in constructor
contructor (arguments-lists) : initiliztion - section
{
    assignment + other code;
}*/
class test
{
    int a;//order declaration is being followed
    int b;

public:
    // test(int i, int j) : a(i), b(j+i)
    // test(int i, int j) : a(i), b(a*j)
    // test(int i, int j) :  b(j),a(i+b) -->Red flag this will create problems because a will be initialized first
    test(int i, int j) : a(i), b(j)
    {
        cout << "Construtor executed "<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;
    }
};

int main()
{
    test t(4,6);
    return 0;
}