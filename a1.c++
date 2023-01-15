#include <iostream>
using namespace std;
// * This is a better comment
//? This is sum function
// This is a normal comment 
// NOTE: This is note comment
int sum (int a , int b){
    return a + b;
}
int main(){
    cout<<"sum :"<<sum(1,3)<<endl;
   cout << "Hello there!" << endl;
   return 0;
}
/*
! This is the json file of better comment
 {
            "tag": "!",
            "color": "#ff5b5b",
            "strikethrough": false,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        },
        {
            "tag": "?",
            "color": "#ff3ae3",
            "strikethrough": false,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        },
        {
            "tag": "-",
            "color": "#049f1b",
            "strikethrough": true,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        },
        {
            "tag": "todo",
            "color": "#FF8C00",
            "strikethrough": false,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        },
        {
            "tag": "*",
            "color": "#66ff3a",
            "strikethrough": false,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        },
        {
            "tag": "#",
            "color": "#f9f229",
            "strikethrough": false,
            "underline": true,
            "backgroundColor": "transparent",
            "bold": true,
            "italic": true
        },
        {
            "tag": "note",
            "color": "#3affcc",
            "strikethrough": false,
            "underline": false,
            "backgroundColor": "transparent",
            "bold": false,
            "italic": false
        }
*/