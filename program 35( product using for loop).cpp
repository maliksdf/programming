//Title:Write a program that produces the following output:
//1	  1
//2	  2
//3	  4
//4	  8
//5	  16
//6	  32
//7	  64
#include<iostream>
using namespace std;
int main()
{
	int i;
	for(i=1; i<=64; i=i*2)
	cout<<i<<"\n";
   return 0;
}
