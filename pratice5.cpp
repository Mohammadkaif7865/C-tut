#include<iostream>
using namespace std;
template <class A, class B>
class students{
     A marks;
     string name;
     public:
         students (float a,string s){
             marks = a;
             name = s;
         }
         A getdata(){
            cout<<"Marks and name of the student is : "<<name<<"  "<<marks<<endl;
            cout<<"Average is :"<<marks;
            return marks;
        }
};
int main(){
    students <float , char> stu1(67.7 , "hiran");
    stu1 .getdata(); 
    float R = stu1.getdata();
    cout<<endl<<R;
    return 0;
}