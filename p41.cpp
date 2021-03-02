//Virtual base class 
#include<iostream>
using namespace std;
/* 
Inheritance 
student ---> Test
student -->sports
test --> result
sports --> result
*/
class student{
     protected:
        int roll_no;
    public:
        void set_number(int a){
            roll_no  = a;
        }
        void print_number(void){
            cout<<"Your roll no is "<<roll_no<<endl;
        }
};
class test : virtual public student{
       protected :
       float maths, physics;
       public:
          void set_marks(float m1, float m2){
              maths = m1;
              physics = m2;
          }
          void print_marks(void ){
              cout<<"Your result is here :"
              <<"Maths :"<<maths<<endl<<"Physics :"<<physics<<endl;
          }
};
class sports : virtual public student{
        protected:
          float score;
        public:
            void set_score (float sc){
                score = sc;
            }
            void print_score(void){
               cout<<"YOur PT score is :"<<score<<endl;
            }
};
class result : public test , public sports{
     private:
       float total;
    public:
       void display(void){
            total = maths + physics+ score;
            print_number();
            print_marks();
            print_score();
            cout<<"YOur total score is :"<<total <<endl;
       }   
};
int main(){
    result monu;
    monu.set_marks(78.7,99.8);
    monu.set_number(23);
    monu.set_score(9);
    monu.display();

    return 0;
}