#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream in;
    
    string st ;
    int count = 0;
    int r;
    in.open("sample54b.txt");
    
    while(!in.eof()){
        in>>st;
        if(st == "the"){
             
            count ++;
        }
        
    }
    
    in.close();

    cout<<count;

    return 0;
}
/*
Member  | Stands|      Access
Constant|	For	|
in *	: input :	File open for reading: the internal stream buffer supports input operations.
out     : output:File open for writing: the internal stream buffer supports output operations.
binary	: binary:Operations are performed in binary mode rather than text.
ate	    :at end :The output position starts at the end of the file.
app	    :append :	All output operations happen at the end of the file, appending to its existing contents.
trunc	:truncate:	Any contents that existed in the file before it is open are discarded.


Jump statements are used to alter the flow of control unconditionally. That is, jump statements transfer the program control within a function unconditionally. The jump statements defined in C++ are break, continue, goto and return. In addition to these jump statements, a standard library function exit () is used to jump out of an entire program.
*/