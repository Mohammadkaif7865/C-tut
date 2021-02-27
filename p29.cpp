#include <iostream>
using namespace std;
class complex;
class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    int sumRealcomplex(complex , complex );
    int sumcompcomplex(complex , complex );
}

;
class complex
{
    int a, b;
    // individually declaring funtion as friends
    // friend int calculator ::sumRealcomplex(complex , complex );
    // friend int calculator ::sumcompcomplex(complex , complex );
    // making complete class friend
    friend class calculator;
public:
    void setnumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "Your number is " << a << " +" << b << "i"
             << "\n";
    }
};
int calculator ::sumRealcomplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumcompcomplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex o1, o2;
    o1.setnumber(1,4);
    o2.setnumber(5,7);
    calculator calc;
    int res = calc.sumRealcomplex(o1,o2);
    cout<<"The sum of real parts of o1 and o2 is : "<<res<<endl;
    int res1 = calc.sumcompcomplex(o1,o2);
    cout<<"The sum of imaginary parts of o1 and o2 is : "<<res1<<endl;
    return 0;
}