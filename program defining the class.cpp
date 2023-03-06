#include<iostream>
using namespace std;
class box
{
	int l,b,h;
	public:
		void readdata()
		{
			cout<<"Enter length breadth and height:";
			cin>>l>>b>>h;
		}
	void displayvol()
	{
		cout<<"Volume is:"<<(l*b*h);
		}
};

int main()
{
	box ob;
	ob.readdata();
	ob.displayvol();
	return 0;
}

