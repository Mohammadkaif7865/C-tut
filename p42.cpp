#include<iostream>
using namespace std;
/*
Construtors in derived classes
* We can use constructor in derived classes in C++
* If base class constructor doese not have any arguments , there is no need of any construtor in derived class.
* But if there are more arguements in the base clsss constructor , derived classs need to pass arguments to hte base class construtor
* If both base and derived classes have constructors, base class construtor is executed first.
*In multiple inheritance , base classes are constructed in the order in which they appear in the class declaration.
* in mutilevel inheritance , the contructors are executed in the order of inheritance . 

SPECIAL CASE OF VIRTUAL BASE CLASS 
*  tHE construtors for virtual base classes are invoked before an nonvirtual base class.
If there are multiple virtual base are then constructed beforer the serived class constructor is executed.
* Any ono-virtual base class are then constructed before the derived class constructor is executed
*/
int main(){
    
    return 0;
}