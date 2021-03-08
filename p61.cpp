#include<iostream>
using namespace std;
template <class T1>
class simple{
    T1 a;
    public:
       simple(T1 a){
           this->a = a;
       }
       void display(void);
};
template <class T>
void simple<T>:: display(){
    cout<<a<<endl;
}
void func(int a){
    cout<<"This is a simple functon "<<a<<endl;
}
template <class T>
void func(T a){
    cout<<"This tempaletized function   "<<a<<endl;
} 
int main(){
    simple <int> the(23);
    the.display();
    func(13);

    return 0;
}