#include<iostream>
using namespace std;

int main(){
    int marks[34];
    for (int i = 0; i < 35; i++)
    {
        cout<<"\nEnter the marks of student "<<i+1<<" : ";
        cin>>marks[i];
    }
    for (int  j = 0; j < 35; j++)
    {
        cout<<" Marks of roll number "<<j+1<<" :"<<marks[j]<<endl;
    }
    
    
    return 0;
}