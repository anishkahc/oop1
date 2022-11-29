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
    if(start == -1){
        stringReverse(str, str.size() - 1);
    }else{
        stringReverse(str, start);
    }
}

void stringReverse(const string& str, int start){
    cout << str[start]; 
    if(start == 0){
        return;
    }
    stringReverse(str, start - 1);
}