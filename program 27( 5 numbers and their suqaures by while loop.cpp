//Title:Write a program that displays first five numbers with their squares using while loop.
#include<iostream>
using namespace std;
int main()
{
	int n=1;
	while(n<=5)
	{
		cout<<n<<"         "<<n*n<<"\n";
		n++;
	}
	return 0;
}
