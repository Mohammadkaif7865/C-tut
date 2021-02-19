#include<iostream>
using namespace std;
class student{
      int marks[4],total= 0;
      float s;
      public:
      string name;
      int sum()
      {
            for( int i=0; i<5;i++) 
            {
                  cout<<"Enter marks "<<i+1<<" : ";
                  cin>>marks[i];
                  // total=total+marks[i];
                  cout<<"\n";
            } 
            for( int i=0; i<5;i++) 
            {
                  total =total +marks[i];
            } 

            cout<<"Total = "<<total/2;
            return total/2;                 
      }
      float average()
      {     s =sum();
            cout<<"\nThe percentage is :"<<s/5<<"%";
            return 0;
      }

      protected:

}std1;

 int main()
 {  
//     
    std1.average();
    return 0;
 }