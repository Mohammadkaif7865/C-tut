#include<iostream>
using namespace std;
typedef struct employee   //It is a user define data type
{
    int eID;
    char bg;
    float salary;// type def is used to decrease effort of writting struct employee
}ep;
union money //for better memory management 
{
    int rice;//4 bytes
    char car;//1 bytes
    float pounds;//4 bytes
};
// Union is a user-defined datatype. All the members of union share same memory location. Size of union is decided by the size of largest member of union. If you want to use same memory location for two or more members, union is the best for that.

// Unions are similar to structures. Union variables are created in same manner as structure variables. The keyword “union” is used to define unions in C language.

// Here is the syntax of unions in C language,

// union union_name {
//    member definition;
// } union_variables;
// Here,

// union_name  − Any name given to the union.

// member definition  − Set of member variables.

// union_variable  − This is the object of union.

// Here is an example of unions in C language,
int main(){
    ep monu;
    union money m1;
    m1.rice=4;
    m1.car='t';
    cout<<m1.rice<<endl;
    cout<<m1.rice<<endl;
    monu.eID =001;
    monu.bg ='b';
    monu.salary = 12546.6554;
    cout<<"Monu Blood Group :  "<<monu.bg<<endl;
    cout<<"Monu Salary is : "<<monu.salary<<endl;
    cout<<"Monu Employee ID is : "<<monu.eID<<endl;
    enum Meal{ breakfast , lunch ,dinner};
    Meal m2 = lunch;
    cout<<m2<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}