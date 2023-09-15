//: Write a program that inputs radius from the user and calculates area and circumference of circle using formula Area = ?r2.
#include<iostream>
using namespace std;
int main()
{
	float area,radius,circumference;
	const double pi=3.14159;
	cout<<"enter the radius of circle:"<<"\n";
	cin>>radius;
	//formula
	area=pi*(radius*radius);
	cout <<"enter the area of circle:"<<area<<"\n";
	//formula 
	circumference=2*(pi*radius);
	cout<<"enter the circumference of circle:"<<circumference<<"\n";
	return 0;
}
