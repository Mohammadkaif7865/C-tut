#include<iostream>
using namespace std;
class complex{
        int a,b;
        public:
        //creating a constructor
        //it is a member funtion of a class which will intialize all member funtion of a class . it has same name as class . IT will automatically invoke whenever the object is created
        complex(void);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
complex :: complex(void)//This is a default constructor
//it should bec declared in the public section
///=They will automatically invoked whenever the object is created 
// Do not have return values and they cannot return values
//It can have default arguments
//We cannot refer to their address
{
    a=10;
    b=0;
}
int main(){
     complex c1,c2,c3;
     c1.printNumber();
     c2.printNumber();
     c3.printNumber();
    return 0;
}