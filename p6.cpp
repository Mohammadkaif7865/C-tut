#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Hello world"<<endl;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if(age<18)
    { 
        cout<<"You cannot come to my party"<<endl;
    }
    else if(age==18)
    { 
        cout<<"You Kid come to my party"<<endl;
    }
    else if(age>18)
    { 
        cout<<"You can come to my party"<<endl;
    }
    return 0;

}