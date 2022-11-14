#include <iostream>

using namespace std;
int main(){
   //This initializes the value of pi to 0
   double pi = 0; int i =0;
   //This iterates from 1 to 200000
   while (i < 5000 || pi <= 3.14159){
       //The following conditions determine the value of pi
       if(i%2==0){
           pi+=4.0/(1.0+2.0*i);
       }
       else{
           pi-=4.0/(1.0+2.0*i);
       }
        i++;
    }
        
   //This prints the value of pi
   cout<<pi << endl;
   cout<< i << endl;
   return 0;
}
