//Title:Write a program that inputs three numbers and displays the smallest number by using nested if condition.
#include<iostream>
using namespace std;
int main()
{
	int n1,n2,n3;
	cout<<"enter 3 nubers"<<"\n";
	cin>>n1>>n2>>n3;
	if(n1<n2) 
		if(n1<n3)
		{
		cout<<"samllest number"<<n1<<"\n";
		}
	   else
	    {
		cout<<"smallest number is"<<n3<<"\n";
     	}
    else if(n2<n3)
     	{
			cout<<"smallest number is"<<n2<<"\n";
        }
    	else
       	{
		cout<<"smallest number is "<<n1<<"\n";
	    }
   return 0;	
}
