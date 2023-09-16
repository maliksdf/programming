//Title: Write a program that inputs radius. It calculates area of circle if user enters1 as choice. It calculates circumference if the user enters 2 as choice. It displays error message in case of any other choice.
#include<iostream>
using namespace std;
int main()
{
	int choice;
	float radius, area, circumference;
	cout<<"enter radius "<<"\n";
	cin>>radius;
	cout<<"enter choice 1 as for area and 2 for cicumference"<<"\n";
	cin>>choice;
	if(choice==1)
	{
		area=3.141*(radius*radius);
		cout<<"arae"<<area<<"\n";
	}
	if(choice==2)
	{
		circumference=2*3.141*radius;
		cout<<"circumference"<<circumference<<"\n";
	}
	return 0;
}
