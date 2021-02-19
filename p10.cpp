#include<iostream>
using namespace std;

int main(){
    int a =4;
    int *b = &a;//& ----> reference address of operators 
    cout<<"\nThe address of a :"<<b;// print address of a
    cout<<"\nThe address of a :"<<&a;// print address of a
    // * -------> Dereference operator
    cout<<"\nThe value at  address of b : "<<*b<<endl;// print address of a
    // pointer to pointer 
    int **c = & b;
    cout<<"The value of b is "<<&b<<endl;
    cout<<"The address of b is "<<c<<endl;
    cout<<"The value at address of c is "<<*c<<endl;
    cout<<"The value at address value_at(value_at (c))  is : "<<**c<<endl;
    
    return 0;
}