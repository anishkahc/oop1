#include <iostream>
using namespace std;

int main(){
   
   double pi = 0.0; int i;
   
   for (i=0; i < 200000; i++){
       
       if(i%2==0){
           pi+=4.0/(1.0+2.0*i);
           //cout << pi << " at " << i << endl;
       }
       else{
           pi-=4.0/(1.0+2.0*i);
           //cout << pi << " at " << i << endl;
       }
       if(pi >= 3.14159 && pi < 3.14160)
       {
            cout << pi << " at " << i+1 << endl;
            break;
       }
    }
   return 0;
}
