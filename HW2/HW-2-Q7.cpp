#include <iostream>
#include<array>
using namespace std;
 
 
int recursiveMinimum(int array[], int sub1, int sub2)
{
   if (sub1 == sub2)
       {
           return array[sub1 - 1];
       }
   return min(array[sub2 - 1], recursiveMinimum(array,sub1, sub2 - 1));
}
 
int main()
{
   int len, i, sub1, sub2;
   cout << "Enter the length of the array" << endl;
   cin >> len;
 
   int array[len];
 
    cout << "Enter elements " << endl;
   for(i = 0; i < len; i++)
   {
       cin >> array[i];
   }
 
   cout << "Enter starting subscript" << endl;
   cin >> sub1;
 
   cout << "Enter ending subscript" << endl;
   cin >> sub2;
 
   cout<<"Minimum no: "<< recursiveMinimum(array, sub1, sub2) << endl;
 
   return 0;
}
