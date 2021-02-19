#include<iostream>
using namespace std;
int add(int a , int b , int c){
    cout<<"\n using funtion with 3 arguements"<<endl;
    return a+b+c;
}
int add(int a , int b ){
    cout<<"\n using funtion with 2 arguements"<<endl;
    return a+b;
}
int main(){
    cout<<"The sum of 3 and 6 is "<<add(3,6)<<endl;
    cout<<"The sum of 3,6 and 7 is "<<add(3,6,7);
    
    return 0;
}