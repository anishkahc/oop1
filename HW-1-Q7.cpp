//Homework 1 - Question 6

#include <iostream>
using namespace std;

int main()
{
    //variable declaration
    double weight, height, bmi;

    //Accepting user input values
    cout<<"Enter weight in kilograms"<<endl;
    cin>>weight;
    cout<<"Enter height in meters"<<endl;
    cin>>height;

    //calculating user BMI
    bmi = weight/(height*height);
    cout<<"\nBMI Values\nUnderweight: Less than 18.5\nNormal: between 18.5 and 24.9\nOverweight: between 25 and 29.9\nObese: 30 or greater"<<endl;

    if (bmi < 18.5 )
    {
        cout<<"\nBMI value: "<<bmi<<"\nUnderweight: Less than 18.5"<<endl;
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        cout<<"\nBMI value: "<<bmi<<"\nNormal: between 18.5 and 24.9"<<endl;
    }
    else if (bmi >= 25 && bmi < 30)
    {
        cout<<"\nBMI value: "<<bmi<<"\nOverweight: between 25 and 29.9"<<endl;
    }
    else
    {
        cout<<"\nBMI value: "<<bmi<<"\nObese: 30 or greater"<<endl;
    }
    
    return 0;
}