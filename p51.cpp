//virtual functions
#include<iostream>
using namespace std;
class Baseclass{
     public :
          int var_base = 1;
        void virtual display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
        }
};
class Derivedclass : public Baseclass{
      public :
          int var_derived = 3;
        void display(){
            cout<<"Display Base class variable var_base "<<var_base<<endl;
            cout<<"Display derived class variable var_derived "<<var_derived<<endl;
        }
};
int main(){
    Baseclass * base_class_pointer;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}