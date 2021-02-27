#include<iostream>
using namespace std;
class complex{
        int a,b;
        public:
        //creating a constructor
        //it is a member funtion of a class which will intialize all member funtion of a class . it has same name as class . IT will automatically invoke whenever the object is created
        complex(int x, int y);
        void printNumber(){
            cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;
        }

};
complex :: complex(int x, int y)//paramerized constructor
{
    a = x;
    b = y;
}
int main(){
    //implicit call
    complex a(4,6);
    //Explicit call
    complex b = complex (5,7); 

    a.printNumber();
    b.printNumber();
    return 0;
}// never run program after selecting some portion of program if so then it will run only the selected part of the program  