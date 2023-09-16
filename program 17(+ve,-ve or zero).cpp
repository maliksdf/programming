//Title:Write a program that inputs from user and determines whether it is positive, negative or zero.
#include<iostream>
using namespace std;
int main ()
{
	int num;
	cout<<"enter a number:"<<"\n";
	cin>>num;
	//using if structure
	if(num>=0)
	cout<<"number is positive:"<<"\n";
	if(num<=0)
	cout<<"number is negative:"<<"\n";
	if(num==0)
	cout<<"number is zero:"<<"\n";
	return 0;
}
