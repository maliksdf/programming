//Title:Write a program that inputs a three digit number from the user and displays it in reverse order. For example if the user enter 123, it displays 321.
#include<iostream>
using namespace std;
int main ()
{
	int n,a,b;
	cout<<"enter 3-digits"<<"\n";
	cin>>n;
	a=n/100;
	n=n%100;
	b=n/10;
	n=n%10;
	cout<<"enter the reverse numbers"<<"\n";
	return 0;
	
}
