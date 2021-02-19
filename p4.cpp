#include<iostream>
using namespace std;
int main()
{
    float a=34.4f;
    char t = 'b';
    int d;
    d=t;
    
    long double e=34.4l;
    cout<<"\nTHe size of 34.4f is :"<<sizeof(34.4f);
    cout<<"\nTHe size of 34.4l is :"<<sizeof(34.4l);
    cout<<"\nTHe size of 34.4F is :"<<sizeof(34.4F);
    cout<<"\nTHe size of 34.4L is :"<<sizeof(34.4L)<<endl;
    //Reference variable----->
    float x=455;
    float &y=x;
    cout<<x<<endl<<d<<endl<<int(a)<<endl;
    cout<<y<<endl;
    return 0;
}