#include <iostream>
using namespace std;
class Baseclass
{
public:
    int var_base;
    void display()
    {
        cout << "Display Base class variable var_base " << var_base << endl;
    }
};
class Derivedclass : public Baseclass
{
public:
    int var_derived;
    void display()
    {
        cout << "Display Base class variable var_base " << var_base << endl;
        cout << "Display derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    Baseclass *base_class_pointer; //base class pointer can only access inherited base class members in the derived class thas's it it cannot use the memebers of dervied class .
    Baseclass obj_base;
    Derivedclass obj_derived;
    base_class_pointer = &obj_derived; //yes it permitted thatt a pointer of a base class can point the object of derived class
    base_class_pointer->var_base = 40;
    //    base_class_pointer->var_derived = 40; it is not allowed it can only use to call the members of base class;
    base_class_pointer->display();
    Derivedclass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_derived = 98;
    derived_class_pointer->var_base = 567498;
    derived_class_pointer->display();
    //Polymorphism
    // - one name and multiple forms
    // - eg. Function overloading , operator overloading
    // - eg. Virtual funtions
    /*            //Polymorphism
                  /                \
                 /                  \ 
                /                    \
     compile time Polymorphism    Run time Polymorphism
           static binding             dynamic binding
           early binding                   Late binding    
           /           \                           |
          /             \                          |
function overloading  operator overloading         |
                                                  \ /
                                                   |
                                                virtual function
     Polymorphism in c++ can be of two types:
     1. Compile time polymorphism
         1.1 - Function overloading
         1.2 - Operator Overloading
     2. Run time polymorphism
         2.1 - Virtual funtion
     */
    return 0;
}