#include<iostream>
using namespace std;
/*
Create 2 classes
   1. SimpleCalculator -takes input of 2 numbers using a utility function and perform +,-,*,/ and displays the results using another funtions.

   2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your choice.
   Create another class HybridCalculator and inherit it using these 2 classes:
   Q1. What type of inheritance are you using?
   Q2. Which mode of inheritance are you using?
   Q3. Create an object of HybridCalculator and display results ot simple and scientfic calculator.
   Q4. How is code reusability implemmented. 
*/
class simplecalculator{
    float sum,sub,div,mult;
    public:
      float add(float num1, float num2){
            sum = num1 + num2;
            return sum;
      }
      float minus(float num1, float num2){
            sub = num1 - num2;
            return sub;
      }
      float product(float num1, float num2){
            mult = num1 * num2;
            return mult;
      }
      float divide(float num1, float num2){
            div = num1 /num2;
            return div;
      }
};
class scientificCalculator : public simplecalculator{
     float volume,radius,height;
     public:
        float volumeof_cone(float radius,float height)
        {
            volume = ((divide(1,3))*(divide(22,7))*(product(radius,radius))*height);
              return volume;
        }
        float volumeof_cylinder(float rad,float heig)
        {
            volume = ((divide(22,7))*(product(radius,radius))*height);
            return volume;
        }
        void total_Volume(void){
            cout<<"Enter the height and radius of cone and cylinder  :";
            cin>>radius>>height;
            cout<<"The total volume is :"<<volumeof_cylinder(radius,height)+volumeof_cone(radius,height)<<" cm^3 ";
        }
        
};
int main(){
    scientificCalculator s;
    s.total_Volume();
    return 0;
}