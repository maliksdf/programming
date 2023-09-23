//Title:Write a program that inputs an integer and displays whether it is a prime number or not.
#include<iostream>
using namespace std;
int main()
{
	int i,j, count=0;
	cout<<"enter a number"<<endl;
	cin>>i;
	j=1;
	while(j<=i)
	{
		if(i%j==0)
		count++;
		j++;
	}
	if(count==2)
	cout<<"prime no"<<endl;
	else
	cout<<"composite no"<<endl;
	return 0;
}
