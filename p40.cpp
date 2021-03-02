#include<iostream>//ambiguity
using namespace std;
class base1{
    public:
        void greet(){
            cout<<"How are you?"<<endl;
        }
};
class base2{
    public:
        void greet(){
            cout<<"Kaise Ho?"<<endl;
        }
};
class derived : public base1 ,public base2 {
      int a;
      public: 
           void greet(){
               base2::greet();
           }
};
 class B{
     public :
        void say(){
            cout<<"Hello world"<<endl;
        }
 };
 class D : public B{
     int a;
     public :
        void say(){  //Ambiguity can be resolve by overwriting of function
            cout<<"Hello my beautiful world !!!!!"<<endl;
        }
 };
int main(){
    // ambiguity 1
    // base1 base1obj;
    // base2 base2obj;
    // base1obj.greet();
    // base2obj.greet();
    // derived d;
    // d.greet();
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}