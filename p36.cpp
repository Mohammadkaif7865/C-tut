/*Inheritance in C++ -overview
 * Reusabilty is very important feature of OOPs.
 * In C++ we can reuse a class and  add additional features to it.
 * Reusing classes saves time and money.
 * Reusing already tested and debugged class will save a lot of effort of developing  and debugging the same thing again.
 What is inheritance in C++
 * The concept of reusability in C++ is supported using Inheritance 
 * We can reuse the properties of an existing class be inheriting from it.
 * The existing class is called the Base class.
 * The new class which is inherited is called as the Derived class
 * Reusing Classes saves time and money
 * There are different types of inheritance in C++
 Types of inheritance 
  * Mutiple inheritance
  * Hierarchical inheritance
  * Single Inheritance 
  * Multilevel Inheritance
  * Hybrid inheritance*/
 #include<iostream>
 using namespace std;
 //Base class
 class employee{
     public: 
     int id;
     float salary;
        employee (int inpID){
            id = inpID;
            salary = 34;
        }
        employee(){}
     
 };
 //Derived class
//  class {{derived-class -name}} : {{visibiltiy mode}} {{base class name}}
// {
//     // class memebers
// }//default visibilty mode is private
//1.Private visibilty mode make public members of base class become private members of derived class 
//1.Public visibilty mode make public members of base class public members of derived class
//3.Private members are never inherited in base class
class programmer : public employee{
    public:
    int languageCode =9;
    void getbdata(){
        cout<<id<<endl;
    }
    programmer (int inpId){
        id = inpId;
    }

};
 int main(){
     employee monu(1) ,sonu(2);
     cout<<monu.salary<<endl;
     cout<<sonu.salary<<endl;
     programmer skillf(10);
     cout<<skillf.languageCode<<endl;
     cout<<skillf.id<<endl;
     skillf.getbdata();
     return 0;
 }