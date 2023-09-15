//writtenn by:  Ayesha Amin
//Title:program that inputs base height from the user and calculates area of a triangle by using the formula(Area = ½ * Base *Height).
#include<iostream>
using namespace std;
int main()
{
	int base,height;
	float Area;
	cout<<"enter base of triangle:"<<"\n";
	cin>>base;
	cout<<"enter height of triangle:"<<"\n";
	cin>>height;
    
    Area= 0.5* base* height;
    cout<<"Area of triangle for given base and height is:"<<Area<<"\n";
  return 0;
}
