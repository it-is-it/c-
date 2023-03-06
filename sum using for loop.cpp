#include<iostream>
int main()
{
	int sum=0 ,n;
	std::cout << "Enter the number n:";
	std::cin >> n;
	for (int i=1; i<= n; i++)
	{
		sum += i;
	}
	std::cout << "Sum of 1 to " <<n << " is:" << sum <<std::endl;
	return 0;
}
