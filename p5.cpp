#include<iostream>
#include<iomanip>
using namespace std;
int main()
{   int a =43, b=554,c=3445;
    const char f='d';
    cout<<char(f+1);
    // manipulators  in c++
    cout<<"The value of a is :"<<a<<endl;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of c is :"<<c<<endl;
    cout<<"The value of a is :"<<setw(4)<<a<<endl;
    cout<<"The value of b is :"<<setw(4)<<b<<endl;
    cout<<"The value of c is :"<<setw(4)<<c<<endl;
    cout<<a*b+c;
    return 0;
}