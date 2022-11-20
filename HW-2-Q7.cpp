#include <iostream>
#include <array>

using namespace std;

const int arraySize{10};
array<int, arraySize> minArr{1, 2, 3, -4, 5, 6, -7, 6, 5, 4}; 

int recursiveMinimum(const array<int, arraySize>& minArr, int start, int end);

int main(){
    cout << recursiveMinimum(minArr, 0, 9) << endl;
}

int recursiveMinimum(const array<int, arraySize>& minArr, int start, int end){
    if(start == end){
        return minArr[start];
    }
    return (minArr[start] < recursiveMinimum(minArr, start + 1, end) ? minArr[start] : recursiveMinimum(minArr, start + 1, end));
}