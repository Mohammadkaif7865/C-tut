#include<iostream>
using namespace std;

int main(){
    int a = 1 , count = 0;
    Loop: cout<<"THis number is small "<<a<<endl;
    a=a+1;
    if(a<10){
        count++;
      goto Loop;//break continue goto to label return exit()
    }
    
    cout<<"The number of iteration is "<<count;

    return 0;
}