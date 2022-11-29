#include <iostream>
using namespace std;

int main(){
     int n, i, d, num, digit, rev = 0;
    do{
        cout << "Enter a 5 digit number: ";
        cin >> num;
        n = num;
        d = num;
        i=0;
        while(d!=0)
        {
            d=d/10;
            //cout << n << endl;
            i++;
            //cout << i << endl;
        }   
     }while (i!=5);    
     
     do
     {
         digit = num % 10;
         rev = (rev * 10) + digit;
         num = num / 10;
     } while (num != 0);
     cout << "Reverse number: " << rev << endl;
     if (n == rev)
         cout << "Palindrome number.";
     else
         cout << "Not a palindrome number.";
    return 0;
}