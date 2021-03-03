#include<iostream>
using namespace std;
class A{
    public :
      int a = 1;

};
class B :virtual public A{
    public :
      int b = 2;

};
class C: virtual public A{
    public :
      int c = 3;

};
class D: public B, public C{
    public :
      int d = 3;
      void display(void){
          cout<<"The value of a is : "<<a<<endl;
          cout<<"The value of d is : "<<d<<endl;
      }

};
int main(){
    D obj_D;
    obj_D.display();
    return 0;
}