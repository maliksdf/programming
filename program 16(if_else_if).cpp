//Title:Write a program that inputs salary. If salary is 20000 or more, it deducts 7% of salary. If salary is 10000 or more or more but less than 20000, it deducts 1000. If salary is less than 10000, it deducts nothing and then displays net salary.
#include<iostream>
using namespace std;
int main ()
{
	int salary;
	float net ;
	cout<<"enter your salary"<<"\n";
	cin>>salary;
	if(salary>=20000)
	net =salary*(salary-7.0/100);
	else if(salary>=10000)
	net = salary- 10000;
	else
	net=salary;
	cout<<"net salary is"<<"\n";
	return 0;
}
