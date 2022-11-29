//Homework 1 - Question 6

#include<iostream>
#include<cmath>

using namespace std;
 
int main()
{
    cout << "Integer\tSquare\tCube" << endl;
    for(int i=0; i<=10; i++)
    {
        cout << i << "\t" << pow(i, 2) << "\t" << pow(i,3)<< endl;
    }
 
    return 0;
}