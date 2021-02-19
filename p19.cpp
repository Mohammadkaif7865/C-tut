#include<iostream>
using namespace std;
int fib(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fib(n-2)+ fib(n-1);
}
int main(){
    int c;
    cout<<"Enter a number for fibonacci sequence :";
    cin>>c;
    cout<<"The trem in the fibonacci series at "<<c<<" is "<<fib(c)<<endl;
    return 0;
}