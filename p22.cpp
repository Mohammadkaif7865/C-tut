#include<iostream>
#include<string>
using namespace std;
class binary{
        string s;
        public : 
        void read(void);
        void chk_bin(void);
    };
void binary :: read(void){
    cout<<"Enter a binary number"<<endl;
    cin>>s;
}
void binary ::chk_bin(void){
    for (int i = 0; i < s.length(); i++)
    {
       if (s.at(i)!='0'&& s.at(i)!='1')
       cout<<"Incorret binary format "<<endl;
       exit (0); 
    }
    
}
int main(){
    // OOPs - classes  and objects
    // C++ --> initially called --> C with classes by stroustroup 
    // class --> extension of structures (in C)
    // strutures limitations
    //         --> members are public 
    //         --> No methods
    // classes = structures + more
    // classes  -->can  methods and properties
    // classes --> can make few memebers as private & few as public
    // sturctures in c++ are typedefed
    // you can declare objects along with the class declaration like this:
    //    class Employee{
    //        //class definition
       
    //    }monu ,sonu;
    //harry.salary = 8 make no sense if salary is private
    //Nesting of member funtions
    binary b;
    b.read();
    b.chk_bin();
    return 0;
}