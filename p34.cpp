#include<iostream>
using namespace std;
class number{
     int a;
     public:
     number(){
         a=0;
     }
     number(int num){
         a=num;
     }
     number(number &obj){
         cout<<"Copy construtor called !!!!!"<<endl;//when no copy constructor is found , compiler supplies its own copy construtor
         a=obj.a;
     }
     void display(){
         cout<<"The number of this object is "<<a<<endl;
     }
};
int main(){
    number x,y,z(45),z2;
    x.display();
    y.display();
    z.display();//z1 should exactly resemble z or y or x
    number z1(z);//copy constructor invoked
    z1.display();

    z2 =z;//copy constructor do not invoked
    z2.display();
    number z3 = z;//copy constructor invoked
    z3.display();

    return 0;
}