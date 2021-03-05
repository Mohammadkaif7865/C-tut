#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    ifstream in;
    
    char st ;
    int count = 0;
    int r;
    in.open("sample54b.txt");
    
    while(!in.eof()){
        in>>st;
        if(st == 'h'){
             
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
nocreate

Opens the file only if it already exists

noreplace

Opens the file only if it does not already exist

Jump statements are used to alter the flow of control unconditionally. That is, jump statements transfer the program control within a function unconditionally. The jump statements defined in C++ are break, continue, goto and return. In addition to these jump statements, a standard library function exit () is used to jump out of an entire program.
Syntax: seekg(offset, direction/seekdir);
Offset/Seekdirvalues are:

ios::beg: beginning of a file
ios::end: end of a file
ios::cur: current position of a file
Syntax: seekp (offset, direction/seekdir);
Offset/Seekdir values are:

ios::beg: beginning of a file
ios::end: end of a file
ios::cur: current position of a file
*/