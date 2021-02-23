#include <iostream>
using namespace std;
class employee
{
    int id;
    static int count;//static variable by default the value is zero

public:
    void setData(void)

    {
        cout<<"Enter the Id of the employee:";
        cin >> id;
        count ++;

    }
    void getData(void)

    {
        cout<<"The employee id is : "<< id<<" and this is employee number : "<<count;
    }
    static void getcount(void)
    {
     cout<<"The value of count is :"<<count<<endl;   
    }
};
int employee ::  count;//static variable
int main()
{
    employee monu,sonu,gonu;
    monu.setData();
    monu.getData();
    employee::getcount();
    sonu.setData();
    sonu.getData();
    employee::getcount();
    gonu.setData();
    gonu.getData();
    employee::getcount();
    return 0;
}