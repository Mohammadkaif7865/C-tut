#include <iostream>
using namespace std;
class check
{
    int a;

public:
    int b;
    check()
    {
        a = 0;
        b = 0;
        cout << "The deafault values are : " << a << "," << b << endl;
    };
    check(int pass)
    {
        a = pass;
        b = 0;
        cout << "The pass value is :" << a << endl;
    }
    check(int pass1, int pass2)
    {
        a = pass1;
        b = pass2;
        cout << "The pass values are : " << a << "," << b << endl;
    }
    ~check()
    {
        cout << "The destrutor is being called!!!!!";
    }
    void result()
    {
        cout << "The sum of a and b is :" << a + b << endl;
    }
    void pass(int num1, int num2)
    {
        cout<<"I'm going to change the construtor values if someone calls me!!!!!! -^-"<<endl;
        a = num1;
        b = num2;
    }
};
int main()
{
    check y(2, 2);
    y.pass(2, 6);
    y.result();
    return 0;
}