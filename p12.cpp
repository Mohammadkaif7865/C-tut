#include<iostream>
using namespace std;

int main(){
    int marks[4];
    for(int i=0; i<5;i++)
    {
        cout<<"Enter marks "<<i+1<<" : ";
        cin>>marks[i];
    }
    int *p = marks;
    cout<<"The value of marks[0] is : "<<*p<<endl;
    cout<<"The value of marks[1] is : "<<*(p+1)<<endl;
    cout<<"The value of marks[2] is : "<<*(p+2)<<endl;
    cout<<"The value of marks[3] is : "<<*(p+3)<<endl;
    cout<<"The value of marks[4] is : "<<*(p+4)<<endl;
    return 0;
}