#include <iostream>
using namespace std;

int main(){
   
   double pi = 0.0; int i;
   
   for (i=0; i < 200000; i++){
       
       if(i%2==0){
           pi+=4.0/(1.0+2.0*i);
       }
       else{
           pi-=4.0/(1.0+2.0*i);
       }
       if(pi >= 3.14159 && pi < 3.14160)
       {
            cout << pi << " is the pi value at " << i+1 << " iteration" << endl;
            break;
       }
    }
   return 0;
}
