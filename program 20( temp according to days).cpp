//Title:Write a program that inputs temperature and displays a message according to following table:
//Temperature				Message
//Greater than 35			Hot Day
//Between 25 and 25			Pleasant Day
//Less than 25				Cool Day
#include<iostream>
using namespace std;
int main()
{
	int temp;
	cout<<"enter temprature"<<"\n";
	cin>>temp;
	if(temp>35)
	cout<<"Hot day"<<"\n";
	if(temp>=25&& temp<=35)
	cout<<"Pleasant day"<<"\n";
	if(temp<25)
	cout<<"Cool day"<<"\n";
	return 0;
}
