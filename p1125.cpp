#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i]=='*')
        {
            cout<<"yes"<<endl;
        }
        
    }
    
    return 0;
}