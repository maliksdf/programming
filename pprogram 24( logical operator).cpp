//Title:Write a program that inputs two numbers and one arithmetic operator. It applies arithmetic operation on two numbers on the basis of operator entered by user using switch statement.
#include<iostream>
using namespace std;
int main()
{
	int a,b,n;
	cout<<"enter your choice"<<"\n";
	cin>>n;
	cout<<"enter 2 numbers"<<"\n";
	cin>>a>>b;
	switch(n)
{
	case 1:   cout<<"sum of numbers"<<a+b<<"\n";
	break;
	case 2:   cout<<"sub of numbers"<<a-b<<"\n";
	break;
	case 3:   cout<<"multiplication of numbers"<<a*b<<"\n";  
	break;
	case 4:   cout<<"division of numbers"<<a/b<<"\n";
	break;
	case 5:   cout<<"modulus of numbers"<<a%b<<"\n";
	break;
	default:
		   cout<<" go to difference code"<<"\n";
} 
return 0;
}
