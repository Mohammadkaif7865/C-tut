#include<iostream>
using namespace std;
class simple{
    int data1,data2,data3;
    public:
        simple(int a,int b=9,int c=3){
                data1 = a;
                data2 = b;
                data3 = c;
        }
        void printData();
};
void simple  :: printData(){
    cout<<"The value of data1 ,data2 and data3 is "<<data1<<","<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s(1,4);
    s.printData();
    simple s2(1,4,5);
    s2.printData();
    simple s1(1);
    s1.printData();
    return 0;
}