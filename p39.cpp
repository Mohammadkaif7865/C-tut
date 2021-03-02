#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number()
{
    cout << "The roll number is :" << roll_number << endl;
}
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "The marks of the student with roll number : " << roll_number << endl;
    cout << "The marks of maths is : " << maths << " and of physics is :" << physics << endl;
}
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll_number();
        get_marks();
        cout << "Your percentage is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    /*
    Notes :
        If we are inheriting B from A and C from B :[ A--->b--->c]
        1. A is the base class of B and B is the base class of C
        2. ABC is called inheritance Path

    */
    result monu;
    monu.set_roll_number(334);
    monu.set_marks(90.34, 96.9);
    monu.display();
    return 0;
}