#include<iostream>
#include<fstream>
/*
The useful classes for working with files in c++ are:
1. fstreambase
2. ifstream---> derived from fstreambase
3. ofstream---> derived from fstreambase
In order work with files in C++ , you will have to open it , Primarily, there are 2 ways to open a file :
  1. Using the constructor 
  2. Using the member function open() of the class
*/
using namespace std;

int main(){
    //Opening files using contructor
    string st;
    // cout<<"Enter the string : ";
    // cin>>st;
    // ofstream out("sample54.txt");//Write opertion
    // out<<st;
    // out.close();
    ifstream in("sample54.txt");
    getline(in , st);
    cout<<st;
    // getline(in , st);
    // cout<<"\n"<<st;
    return 0;
}