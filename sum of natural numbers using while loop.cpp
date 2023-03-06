#include<iostream>

int main()
{
	int count=1, sum=0 , num;
	std::cout << "Enter the number till which sum should be calculated: ";
	std::cin >> num;
	while (count <= num)
	{
	sum += count;
	count++;
	}
	std::cout << "Sum of 1 to " <<num <<" is : " << sum << std::endl;
	return 0;
}
