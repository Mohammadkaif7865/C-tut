#include<iostream>
using namespace std;
int main()
{
    /*there are three types of loops
    1. for loop
    2.while loop
    3. do while loop*/
    //.1
    // for(int i=0 ; i<=100;i++)
    // {
    //     cout<<i<<"\n";
    //     // i++;
    //     // i++;
    // }
    //.2
    int j;
    cout<<"Enter a number for its table : "<<endl;
    cin>>j;
    cout <<" This is the table : "<<"\n";
    int i =1;
    do
    {
           cout<<i*j<<endl;
           i++;
    }while(i<=10);
    return 0;

}