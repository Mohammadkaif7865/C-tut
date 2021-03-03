#include<iostream>
using namespace std;
class complex{
    int real , imaginary;
    public:
       void getData(){
           cout<<"The real part is "<<real<<endl;
           cout<<"The imaginary part is "<<imaginary<<endl;
       }
       void setData(int a, int b){
           real =a;
           imaginary = b;
       }
};
int main(){
    // complex c1;
    // complex *ptr = &c1;
    complex *ptr = new complex[3];
    ptr->setData(1,54);
    ptr->getData();// -> arrow operator
    // c1.setData(1,54);
    // c1.getData();
    // (*ptr).setData(1,54);
    // (*ptr).getData();
    // -> arrow operator
    complex *ptr1 = new complex[3];
    for (int  i = 0; i < 4; i++)
    {
        ptr1->setData(1+i,54+i);
        ptr1->getData();
        ptr=ptr+1;
    }
    

    return 0;
}