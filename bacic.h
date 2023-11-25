#include<iostream>
namespace basic
{

int fact(int n)
{
	int f=1;

	for(int i=2;i>=1;i--)
	f =f*i;
	std::cout<<"factorial is ="<<f;
}
}
