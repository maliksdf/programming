//Write a program that inputs miles from the user and converts miles into kilometers. One mile is equal to 1.609km.
#include<iostream>
using namespace std;
int main()
{
	float miles,kilometer;
	cout <<"enter distance in miles"<<"\n";
	cin>>miles;
	//formula
	kilometer = miles*1.609;
	cout<<"enter distance in miles"<<miles<<"\n";
	cout<<"enter distance in kilometers"<<kilometer<<"\n";
	return 0;
}
