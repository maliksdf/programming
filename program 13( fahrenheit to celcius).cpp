//title:Write a program that inputs temperature in Fahrenheit and convert it into Celsius.
#include<iostream>
using namespace std;
int main ()
{
	float frh, cel;
	cout<<"enter temprature in fahrenheit:"<<"\n";
	cin>>frh;
	//formula 
	cel =(frh-32)*9/5;
	cout<<"enter temprature in fahreheit"<<frh<<"\n";
	cout<<"enter temprature in celcius"<<cel<<"\n";
	return 0;
}

