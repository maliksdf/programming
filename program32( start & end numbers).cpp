//Title:Write a program that inputs starting and ending point from the user and displays all odd numbers in the given range using do-while loop.
#include<iostream>
using namespace std;
int main()
{
	int s,e,n;
	cout<<"enter starting number:"<<"\n";
	cin>>s;
	cout<<"enter ending number:"<<"\n";
	cin>>e;
	do{
    	if(n%2!=0)
	    cout<<n<<"\n";
	    n++;
	  }
   	while(n<=e);
 return 0;
	
}
