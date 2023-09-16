//Title:Write a program that inputs a character and displays whether it is vowel or consonant using switch statement.
#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter a character"<<"\n";
	cin>>ch;
	switch(ch)
	{
		case 'a':
			cout<<"ch is vowel"<<"\n";
		    break;
	    case 'e':
	    	cout<<"ch is vowel"<<"\n";
	        break;
	    case 'i':
	    	cout<<"ch is vowel"<<"\n";
	    	break;
	    case 'o':
	    	cout<<"ch is vowel"<<"\n";
	    	break;
	    case 'u':
	    	cout<<"ch is vowel"<<"\n";
	    	break;
	    default:
	        cout<<"ch is not vowel"<<"\n";
	}
	return 0;
}
