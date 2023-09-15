//Write a program that inputs 4 numbers and calculates the sum, average, and product of all the numbers.
#include<iostream>
using namespace std;
int main()
{
	int a,b,c,d,sum,product;
	float average;
	cout<<"enter 1st number:"<<"\n";
	cin>>a;
	cout<<"enter 2nd number:"<<"\n";
	cin>>b;
	cout<<"enter 3rd number:"<<"\n";
	cin>>c;
	cout<<"enter 4th number:"<<"\n";
	cin>>d;
	
	//formulas
	sum =a+b+c+d;
	product =a*b*c*d;
	average =sum/4;
	
	cout<<"sum of 4 numbers:"<<sum<<"\n";
	cout<<"product of 4 numbers:"<<product<<"\n";
	cout<<"average of 4 numbers:"<<average<<"\n";
	return 0;
}
