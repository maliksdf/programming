//Title:Write a program that inputs a number from the user and displays the factorial of that number using while loop.
#include<iostream>
using namespace std;
int main()
{
	int num,c ,fact;
	c=1,  fact=1;
	cout<<"enter a number"<<"\n";
	cin>>num;
	while(c<=num)
    {
	fact=fact*c;
	c++;
    }
      cout<<"factorial"<<fact<<"\n";
    return 0;
}
