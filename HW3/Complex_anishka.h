using namespace std;
#include <string>
class Complex{
 private:
 double realPart;
 double imaginaryPart;

 public:
 //constructor for initial value assignment
 Complex(int realPart=1, int imaginaryPart=1){
 this->realPart = realPart;
 this->imaginaryPart = imaginaryPart;
 }
 //add function
 Complex add(Complex obj1){
 Complex z;
 z.realPart = realPart + obj1.realPart;
 z.imaginaryPart = imaginaryPart + obj1.imaginaryPart;

 return z;
 }
 //subtract function
 Complex subtract(Complex obj1){
 Complex z;
 z.realPart = realPart - obj1.realPart;
 z.imaginaryPart = imaginaryPart - obj1.imaginaryPart;

 return z;
 }

 //function to convert to string
 string toString(){
 string z;
 if(imaginaryPart<0)
 z = to_string(realPart) + to_string(imaginaryPart) + "*i";
 else
 z = to_string(realPart)+ "+" + to_string(imaginaryPart) + "*i";
 return z;
 }

 //function to set complex numbers
 void setComplexNumber(int realPart, int imaginaryPart){
 this->realPart = realPart;
 this->imaginaryPart = imaginaryPart;
 }

};