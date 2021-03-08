#include<iostream>
#include<list>
using namespace std;

int main(){  
    list<int> list1;
    list<int> list2(7);
    list1.push_back(5);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(1);
    list<int> :: iterator iter;
    iter = list1.begin();
    cout<<*iter;
    iter++;
    cout<<endl<<*iter;
    return 0;
}