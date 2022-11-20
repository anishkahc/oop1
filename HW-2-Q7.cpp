#include <iostream>
#include <array>

using namespace std;

const int arraySize{10};
array<int, arraySize> maxArr{1, 2, 3, 4, 5, 6, 7, 6, 5, 4}; 

int recursiveMaximum(const array<int, arraySize>& maxArr, int start, int end);

int main(){
    cout << recursiveMaximum(maxArr, 0, 9) << endl;
}

int recursiveMaximum(const array<int, arraySize>& maxArr, int start, int end){
    if(start == end){
        return maxArr[start];
    }
    return (maxArr[start] > recursiveMaximum(maxArr, start + 1, end) ? maxArr[start] : recursiveMaximum(maxArr, start + 1, end));
}