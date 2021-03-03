#include<iostream>
using namespace std;

int main(){
    int a =4;
    //Basics of array
    int *ptr = &a;
    cout<<"The value of a is  "<<*(ptr)<<endl;
    //*(ptr) it indicate the value at ptr means it is dereferencing the pointer
    int *p = new int(40);
    cout<<"The value of a is  "<<*(p)<<endl;
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    delete arr;
    cout<<"The value of arr[0] is  "<<arr[0]<<endl;
    cout<<"The value of arr[1] is  "<<arr[1]<<endl;
    cout<<"The value of arr[2] is  "<<arr[2]<<endl;
    return 0;
}