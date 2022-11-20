#include <iostream>
#include <array>
using namespace std;

const size_t arraySize{10};
int whatisthis(const array<int ,arraySize>&, size_t); //prototype

int main() {
    array<int, arraySize> a{1,1,1,1,1};

    int result{whatisthis(a, arraySize)};
    
    cout << "result " << result << endl;
}

int whatisthis (const array<int, arraySize>& b, size_t size) {
    if(size == 1){
        return b[0];
    }
    else {
        return b[size -1] + whatisthis(b, size -1);
    }
}