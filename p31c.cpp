#include<iostream>
#include<math.h>
using namespace std;
class point{
    int x,y;
    public:
     point(int a, int b){
         x=a;
         y=b;
     }
     void displaypoint(){
         cout<<"The point is ("<<x<<","<<y<<")"<<endl;
     }
     friend void distance(point,point);
};
void distance(point p,point q){
    float d;
    d=sqrt(pow((p.x)-(q.x),2)+pow((p.y)-(q.y),2));
    cout<<"Distance  : "<<d<<" Units ";
}
int main(){
    point p(1,1);
    p.displaypoint();
    point q(1,1);
    q.displaypoint();
    distance(p,q);

    return 0;
}