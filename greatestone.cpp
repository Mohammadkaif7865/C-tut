#include <iostream>
using namespace std;

int main()
{
    int a[10], temp = a[0];
    
    cout << "Enter the numbers :";
   for (int  i = 0; i < 10; i++)
    {
        cin>>a[i];
    }
    for (int  i = 1; i < 10; i++)
    {   
        
        if(temp<a[i])
        {
             temp = a[i];
             
        }
        else continue;
    }

    cout << "The greatest number is : " << temp;


    return 0;
}