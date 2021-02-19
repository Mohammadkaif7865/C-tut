#include<iostream>
using namespace std;
int a=2;
float b=3.34565743;
void out()
{
    cout<<"Integer is : "<<a<<"\t Rational is: "<<b;
}
int main()
{
    int a=3;
    // char _ab='b';
    float b=3.635632;
    cout<<"\nLocal Integer is : "<< a<<"\tLocal Rational is :"<<b;
    cout<<"\nGlobal Integer is :"<< ::a<<"\tGlobal Rational is :"<<::b;
    return 0;

}