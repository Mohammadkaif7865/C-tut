#include <iostream>
using namespace std;
int glo = 45;
int main()
{
    ::glo = 56;
    int glo = 23;
    cout << "Global variable is " << ::glo << endl;
    cout << "Local variable is " << glo;
}