//Title:: Write a program that finds area of triangle when three sides a, b and c of the triangle are given. It inputs values of a ,b,c. 
#include<iostream>
#define sqrt 0.5
using namespace std;
int main ()
{
	int a,b,c,area;
	float s;
	cout<<"enter three sides of triangle"<<"\n";
	cin>>a>>b>>c;
	//formula
	s=(a+b+c)/2;
	area = s*(s-a)*(s-b)*(s-c);
	area = sqrt*(area);
	cout<<"area is"<<area<<"\n";
	return 0;
}
