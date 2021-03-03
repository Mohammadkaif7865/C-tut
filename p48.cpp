#include<iostream>
using namespace std;
class shopItem{
    int id;
    float price; 
    public:
        void setData(int a, float b){
            id = a;
            price = b;

        }
        void getData(void){
            cout<<"Code of this item is :"<<id<<endl;
            cout<<"Price of this item is :"<<price<<endl;
        }
};
int main(){
    int size = 3;
    int p,q;
    // int *p = new int [34];
    shopItem *ptr = new shopItem[size]; 
    shopItem *ptrtemp = ptr; 
    for (int i = 0; i < size; i++)
    {
        cout<<"Id and price of item "<<i+1<<" : ";
        cin>>p>>q;
        // (*ptr).setData(p,q);
        ptr->setData(p,q);
        ptr++;
    }
    for (int  i = 0; i < size; i++)
    {
        cout<<"Item number : "<<i+1<<endl;
        ptrtemp->getData();
        ptrtemp++;
    }
    
    

    return 0;
}