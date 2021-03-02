#include<iostream>
using namespace std;
class base{
    protected:

     int a;
    private:
     int b;
    public:
    base(){
        cout<<"Constructor of base class is being called ";
    }


};
//for protected member:
/*                      Public dervation | Private derivation | Protected dervation  
   1.Private members       ---------     |  --------          |  ------- 
   2.Public members        public        |   private          | Protected
   3.Protected members    protected      |   private          | Protected*/ 
class derived : protected base{
      public:
      derived(){
          cout<<"Constructor of derived class is being called :";
      }
};
int main(){
    base b;
    derived d;
    // cout<<d.a;
    return 0;
}