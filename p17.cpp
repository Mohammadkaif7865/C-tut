#include<iostream>
using namespace std;
inline int product ( int a , int b){
    static int c=0;// This executes only once for once c=0 only after this this statement will no run
    c=c+1;//Next time this function is run, the value od c will be retained 
    return a*b+c;
}
int moneyRecieved(int currentmoney,float factor = 1.08)

{
    return currentmoney * factor; 
}
int main(){
    // int a, b;
    // cout<<"Enter the value of a and b";
    // cin>>a>>b;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    // cout<<"The product of a and b is "<<product(a,b)<<endl;
    int money = 10000;
    cout<<"If you have "<< money<<" Rs in your account , you will recive "<<moneyRecieved(money)<<" Rs after 1 year"<<endl;
    cout<<"If you have "<< money<<" Rs in your account , you will recive "<<moneyRecieved(money,1.1)<<" Rs after 1 year";
    return 0;
}