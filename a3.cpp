#include<iostream>
using namespace std;
int glo = 45;
int main(){
    int glo = 0;
    cout<<"Global variable is "<<::glo<<endl;
    cout<<"Local variable is "<<glo;

}