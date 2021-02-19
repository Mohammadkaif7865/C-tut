#include<iostream>
using namespace std;
// typedef struct employee   //It is a user define data type
// {
//     int eID;
//     char bg;
//     float salary;// type def is used to decrease effort of writting struct employee
// }ep;
// union money //for better memory management 
// {
//     int rice;//4 bytes
//     char car;//1 bytes
//     float pounds;//4 bytes
// };

int main(){
    // ep monu;
    // union money m1;
    // m1.rice=4;
    // m1.car='t';
    // cout<<m1.rice<<endl;
    // cout<<m1.rice<<endl;
    // monu.eID =001;
    // monu.bg ='b';
    // monu.salary = 12546.6554;
    // cout<<"Monu Blood Group :  "<<monu.bg<<endl;
    // cout<<"Monu Salary is : "<<monu.salary<<endl;
    // cout<<"Monu Employee ID is : "<<monu.eID<<endl;
    enum Meal{ breakfast , lunch ,dinner};
    Meal m1 = lunch;
    cout<<m1<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    return 0;
}