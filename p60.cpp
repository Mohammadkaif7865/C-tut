#include<iostream>
using namespace std;
template <class T1, class T2>
float funcAverage(T1 a, T2 b)
{
    float avg = (a+b)/2;
    return avg;

}
template <class T>
void swapp (T &a, T &b){
    T temp = a;
    a=b;
    b=temp;

}
int main(){
    float a = funcAverage(223.1, 2.3);
    cout<<"The average is "<<a<<endl;
    float c,d;
    cout<<"Enter the values of c, d ";
    cin>>c>>d;
    swapp(c,d);
    cout<<"The values after the swap is : "<<c<<endl<<d;
    return 0;
}