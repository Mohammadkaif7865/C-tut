#include<iostream>
using namespace std;
template <class T1= int, class T2 = float>//template parameters
class test{
    T1 a;
    T2 b;
    public:
      void show(void){
          cout<<"DataMembers are :"<< this->a<<" ,"<<this->b;

      }
      test(T1 x, T2 y){
         a=x;
         b=y;

      }
};
int main(){
    test <> obj('a', '4');
    obj.show();
    return 0;
}