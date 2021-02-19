#include<iostream>
using namespace std;
int main()
{   int a= 16,b=8;
    cout<<"This is hello world"<<endl;
    cout<<"These are the types of operators in c++"<<endl;
    cout<<"The value of a+b : "<<a+b;
    cout<<"\nThe value of a*b : "<<a*b;
    cout<<"\nThe value of a-b : "<<a-b;
    cout<<"\nThe value of a/b : "<<a/b;
    cout<<"\nThe value of a%b : "<<a%b;
    cout<<"\nThe value of b-- : "<<b--;
    cout<<"\nThe value of --b : "<<--b;
    cout<<"\nThe value of a++ : "<<a++;
    cout<<"\nThe value of ++a : "<<++a;
        //comparion operators
        cout<<"\n The value of a==b : "<<(a==b);
        cout<<"\n The value of a<=b : "<<(a<=b);
        cout<<"\n The value of a>=b : "<<(a>=b);
        cout<<"\n The value of a!=b : "<<(a!=b);
        cout<<"\n The value of a<b : "<<(a<b);
        cout<<"\n The value of a>b : "<<(!(a>b));
        cout<<"\n The value of ((a>b)||(a!=b)) : "<<((a>b)||(a!=b));
        
    return 0;
}