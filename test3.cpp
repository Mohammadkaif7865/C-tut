#include<iostream>
using namespace std;
class abbas{
    int a,b;
    public:
       void getData(void){
           cout<<"Enter the two values :";
           cin>>a>>b;
       }
       void putdata(void){
           cout<<"The values were "<<a<<","<<b;
       }
       int sum(){
           return a+b;
       }
};
int main(){
    abbas *b,c;
    b=&c;
    c.getData();
    int s;
    s= c.sum();
    cout<<"The sum was "<<s;
    b->putdata();
    // b.putdata(); //not allow because pointer can only tell only other's data only
    return 0;
}