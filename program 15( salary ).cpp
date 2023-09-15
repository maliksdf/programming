//Write a program that inputs salary and grade. It adds 50% bonus if grade is greater than 15. It adds 25% bonus if grade is 15 or less and then displays the salary.
#include <iostream>
using namespace std;
int main()
{
	
	int grade;
	float salary, bonus;
	cout<<"enter your salary"<<"\n";
	cin>>salary;
	cout<<"enter your grade"<<"\n";
	cin>>grade;
	if(grade>15)
	{
		bonus= salary*50/100;
	}
	else 
	{
		bonus =salary*25/100;
	}
	salary =salary+bonus;
	cout<<"finally salary:"<<salary<<"\n";
	return 0;
}

