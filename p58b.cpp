#include<iostream>
using namespace std;
template <class E> 
class vectorpro{
      public:
      E *arr;
      int size;
      vectorpro( int m){
          size = m;
          arr = new E[size];
      }
    void input(void){
        cout<<"Enter the coordinates of vector :"<<endl;
          for (int  i = 0; i < size; i++)
      {
          cin>>arr[i];
      }
      
    }
    E  vectorproduct( vectorpro &v){
           E result = 0;
          for (int i = 0; i < size ; i++)
          {
             
              result += this -> arr[i] * v.arr[i];
          }
          return result;
          
      }

};
int main(){
    vectorpro <float> v1(3),v2(3);
    v1.input();
    v2.input();
    float a = v2.vectorproduct(v1);
    cout<<"The vector product is : "<<a;
    return 0;
}