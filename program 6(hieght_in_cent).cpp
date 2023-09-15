//write a program that converts a person's height from inches to centimeters using the formula 2.54 * height.
#include<iostream>
using namespace std;
int main()
{
	int height;
	float height_in_cent;
	cout<<"enter height in inches"<<"\n";
	cin>>height;
	//formula
	height_in_cent=2.54*height;
	cout<<"your height in cent is:"<<height_in_cent<<"\n";
	return 0;
}
