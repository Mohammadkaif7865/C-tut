#include<iostream>
#include<fstream>
using namespace std;
/*
* Read operation
   ifstream in ("THis.txt");
   string st;
   in>>st;  //Just like cin
* Write operation 
ofstream out ("this.txt");
string st = "Monu";
out<<st;//write to a file this.txt !
*/
int main(){
    ofstream mout("sample54b.txt");// connecting our file with hout stream
    string name;
    cout<<"Enter your name : ";
    cin>>name;
    mout<<name;//Writing a string to the file
    mout.close();
    ifstream min("sample54b.txt");
    string content;
    min>>content;
    cout<<"The content of this file is : "<<content;
    min.close();
    return 0;
}