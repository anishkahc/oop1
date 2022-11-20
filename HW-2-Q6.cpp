#include <iostream>
#include <string>

using namespace std;

void stringReverse(const string& str, int start);

int main(){
    cout << "enter your string: ";
    string str;
    getline(cin, str);
    int start;
    cout << "enter start index (-1 to reverse whole string): ";
    cin >> start;
    if(-1 == start){
        stringReverse(str, str.size() - 1); // reverses the whole string
    }else{
        stringReverse(str, start); // reverses string from startpoint
    }
}

void stringReverse(const string& str, int start){
    cout << str[start]; 
    if(0 == start){
        return;
    }
    stringReverse(str, start - 1);
}