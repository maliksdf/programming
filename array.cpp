#include<iostream>
#include"search.h"
using namespace std;


int main()
{
	
		int array[5]={10,20,67,89,65};
		int i,num,loc=-1;
		cout<<"enter num to find"<<endl;
		cin>>num;
		for(i=0;i<5;i++)
		
			if(array[i]==num)
			loc=i;
			if(loc==-1)
			cout<<"num not found"<<endl;
			else
			cout<<"num found at index"<<loc;
			
		
}

