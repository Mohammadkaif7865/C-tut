#include<iostream>
using namespace std;
int sum( int a, int b);//Funtion prototying 
    int sum(int a,int d, int b)
    {
       int c;
       c=((a*2)+(b*4)+d);
       return c;
    }

int main(){
    int n1,n2,n3;

    cout<<"Enter the first number :"<<endl;
    cin>>n1;
    cout<<"Enter the second number :"<<endl;
    cin>>n2;
    cout<<"Enter the third number :"<<endl;
    cin>>n3;
    cout<<"The sum of numbers is : "<<sum(n1,n2)<<"&"<<sum(n1,n2,n3);
    return 0;
}
int sum( int a , int b )
{    // Formal Parameters a and b will be taking values from actual parameters n1 and n2.
    int c;
    c=a+b;
    return c;
}