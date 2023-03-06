#include<iostream>
using namespace std;

int main()
{
	float radius, area;
	const float pi=3.14;
	cout<<" Enter the radius of the given circle:" <<endl;
	cin>>radius;
	area=pi*radius*radius;
	cout<<"The area of the circle is :"<<area;
	return 0;
}

