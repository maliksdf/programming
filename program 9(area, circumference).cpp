//Write a program that inputs radius from the user and calculates area and circumference of cube using formula Area = 4?r2 	Circumference = 4/3?r3.
#include<iostream>
using namespace std;
int main()
{
	float radius,area,circumference;
	const double pi = 3.1415;
	cout<<"enter the radius"<<"\n";
	cin>>radius;
	//formula 
	area= 4*pi*(radius*radius);
	circumference = 4/3*pi*(radius*radius*radius);
	cout<<"enter the area of circle is:"<<area<<"\n";
	cout<<"enter the circumference is:"<<circumference<<"\n";
	return 0;
}
