#include <iostream>
#include <array>

using namespace std;

const int arraySize{1000};
array<int, arraySize> prime;

void setArr(int one);

int main(){
    setArr(1);
    prime[0] = 0;
    prime[1] = 0;

    for(int i=2; i<arraySize; i++){
        if(prime[i]==1){
            for(int j=i+1; j<arraySize; j++){
                if(j%i==0){
                    prime[j]=0;
                }
            }
        }
    }

    cout << "prime nos: " << endl;

    for(int i=0; i < arraySize; i++){
        if(prime[i] == 1){
            cout << i << endl;
        }
    }
}

void setArr(int one){
    for(int i=0; i < arraySize; i++){
        prime[i] = one;
    }
}