#include<iostream>
using namespace std;
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
void swap(int &a , int &b)// Call by refrence actually it change the value at that address
{
    int temp = a;
    a=b;
    b=temp;
}
void swap1(int a , int b)// it will only change for process not change at that address where the variable is saved
{
    int temp = a;
    a=b;
    b=temp;
}
void swap2(int *a , int *b)//by pointer reference
{
    int temp =*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a =4 ,b=5;
    cout<<"The sum of two number is : "<<sum(23,45)<<endl;
    cout<<"Values before swap is : "<<a <<"\t"<<b<<endl;
    swap1(a,b);
    cout<<"Values after swap is : "<<a <<"\t"<<b<<endl;
    cout<<"Values before swap is : "<<a <<"\t"<<b<<endl;
    swap(a,b);
    cout<<"Values after swap is : "<<a <<"\t"<<b<<endl;
    cout<<"Values before swap is : "<<a <<"\t"<<b<<endl;
    swap2(&a,&b);
    cout<<"Values after swap is : "<<a <<"\t"<<b<<endl;
    return 0;
}