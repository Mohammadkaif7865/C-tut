#include<iostream>
using namespace std;

int main(){
    int a[4];
    int *p = a;
    for(int i = 0; i<5;i++)
    {
        cout<<"Enter the value "<<i+1<<" : ";
        cin>>a[i];
        cout<<endl;
    }
    for(int i = 0; i<5;i++)
    {
        cout<<"The address of value "<<i+1<<" : "<<p<<endl;
        cout<<"The value at this address "<<i+1<<" : "<<*p;
        cout<<endl;
        p++;
    }
    cout<<p-1;
    return 0;
}