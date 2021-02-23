#include<iostream>
using namespace std;
int cost[6];
void insert(void)
{
    int temp=0;
    for (int i=0;i<=5;i++)
    {
        cin>>cost[i];
        for( int j=0;j<=i;j++)
        {
            if(cost[j]==cost[i])
            continue;
            else if (cost[j]<=cost[j+1])
            continue;
            else if (cost[j]>=cost[j+1])
            { 
                cost[j+1]=temp;
                cost[j+1]=cost[j];
                cost[j]=temp;
            }
        }
        cout<<"Enter next :"<<endl;

    }
}
void show(void)
{
    for(int i=0;i<=5;i++)
    {
        cout<<"The price of "<<i+1<<" is : "<<cost[i]<<endl;
    }
}

int main(){
    
    cout<<" Enter the cost of all the plots :";
    insert();
    show();
    return 0;
}