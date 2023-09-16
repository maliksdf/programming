//Title:Write a program that inputs two numbers and exchange their values the program should display the values of variables before and after exchange.
#include<iostream>
using namespace std;
int main()
{
	int  a=5;
	int b=10;
	int temp;
	cout<<"enter the value before swapping is:"<<a<<b<<"\n";
	temp=a;
	b=a;
	b=temp;
	cout<<"enter the value after swapping is:"<<a<<b<<"\n";
	return 0;
}
