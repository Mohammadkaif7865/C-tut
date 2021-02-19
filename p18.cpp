#include<iostream>
using namespace std;
long long int fact(long long int a)
{
    if (a>=1)

    {
        return a * fact(a-1);
    }
    else
    return 1;
}
int main(){
    long long int c;
    cout<<"Enter the value : ";
    cin>>c;
    cout<<"Factorail of the number is  "<<c<<" : "<<fact(c)<<endl;
    return 0;
}