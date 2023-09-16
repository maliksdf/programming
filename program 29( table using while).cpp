//Title:Write a program that inputs a number from the user and displays a table of that number using while loop.
#include<iostream>
using namespace std;
int main()
{
	int num, a =1;
	cout<<"enter a number for table"<<"\n";
	cin>>num;
	while(a<=10)
	{
		cout<<"num"<<"*"<<a<<"="<<num*a<<"\n";
		a++;
	}
	return 0;
}
