#include <iostream>
using namespace std;

int calcPwr(int, int);

int main()
{
    int base, power, result;

    cout << "Enter base number: ";
    cin >> base;

    cout << "Enter power: ";
    cin >> power;

    result = calcPwr(base, power);
    cout << base << "^" << power << " = " << result;

    return 0;
}

int calcPwr(int b, int p)
{
    while(p > 1){
        cout << b << "^" << p << endl;
        return ( b * calcPwr(b, p-1));
    }
}