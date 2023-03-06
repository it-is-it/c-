#include<iostream>
int main()
{
// cur is the number we're counting; we will read new values into val
	int cur = 0 , val = 0;
//	read first number and ensure that we have data to process
	if (std::cin >> cur)
	{
	int count=1; //store the count for the current value we're processing
	while (std::cin >> val)
		{	// read the remaning numbers
		if(val == cur) //adding 1 to the value if both are same
				{ 
				++count;
				}
						
		else { //otherwise, print the count for the previous value
				std::cout << cur << "occured" << count << "times" << std::endl;
				cur = val; //remember the new value
				count=1; //reset the counter
			 }
			 
		} // while loop end here
	//	remember to print the count for the last value in the file.
	std::cout << cur << "occured" << count << "times" << std::endl;
	} //outermost if statement ends here
	return 0;
}
