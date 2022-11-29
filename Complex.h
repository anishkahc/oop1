using namespace std;
#include <string>
#include <iostream> 
class Complex{
 private:
 double realPart;
 double imaginaryPart;
 public:
 //assignment
 Complex(int realPart=1, int imaginaryPart=1){
 this->realPart = realPart;
 this->imaginaryPart = imaginaryPart;
 }
 //add 
 Complex add(Complex object1){
 Complex imaginary;
 imaginary.realPart = realPart + object1.realPart;
 imaginary.imaginaryPart = imaginaryPart + object1.imaginaryPart;
 return imaginary;
 }
 //subtract
 Complex subtract(Complex object1){
 Complex imaginary;
 imaginary.realPart = realPart - object1.realPart;
 imaginary.imaginaryPart = imaginaryPart - object1.imaginaryPart;
 return imaginary;
 }
 //convert to string
 string toString(){
 string imaginary;
 if(imaginaryPart<0)
 imaginary = to_string(realPart) + to_string(imaginaryPart) + "*i";
 else
 imaginary = to_string(realPart)+ "+" + to_string(imaginaryPart) + "*i";
 return imaginary;
 }
 //set complex numbers
 void setComplexNumber(int realPart, int imaginaryPart){
 this->realPart = realPart;
 this->imaginaryPart = imaginaryPart;
 }

};