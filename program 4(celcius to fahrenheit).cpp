//Title:: Write a program that inputs temperature from the using Celsius and converts it into Fahrenheit using the formula(F = 9/5 * C + 32).
#include<iostream>
using namespace std;
int main()
{
	int C,F;     // C for celcius and F for fahrenheit
    cout<<"enter temprature in celcius";
	cin>>C;
	
	F=9/5 * C + 32;
	cout<<"temprature in fahrenheit is:"<<F<<"\n";
	return 0;

 } 
