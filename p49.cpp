#include <iostream>
using namespace std;
class A
{
    int a;

public:
    void setData(int a)
    {
        this->a = a;
    }
    void getData()
    {
        cout << "The value of a is : " << a << endl;
    }
};
int main()
{
    //this is a keyword which is a pointer which pointer to the objects which points to the objects which invokes the member funtion
    A a;
    a.setData(4);
    a.getData();
    return 0;
}