//Title:    Write a program that inputs test score of a student and displays his grade on the following:
//Test Score		Grade
//>=90			A
//80-90			B
//70-79			C
//60-69			D
//Below 50		 F
#include<iostream>
using namespace std;
int main()
{
	int score;
	cout<<"enter your score"<<"\n";
	cin>>score;
	if(score>=90)
	{
	cout<<"grade is A"<<score<<"\n";
    }
	else if(score>=80)
	{
	cout<<"grade is B"<<score<<"\n";
    }
	else if(score>=70)
	{
	cout<<"grade is C"<<score<<"\n";
    }
	else if(score>=60)
	{
		cout<<"grade is D"<<score<<"\n";
	}
	else if(score<=50)
	{
	cout<<"grade is F"<<score<<"\n";
    }
	return 0;
}
