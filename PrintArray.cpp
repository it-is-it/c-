#include <iostream>
using namespace std;

void printArray(int theArray[],int sizeofArray);
int main()
{
	int buck[3] ={20,54,94};
	int jess[6] = {3, 4,9, 45,23,99};

	printArray(jess, 6); 
}

void printArray(int theArray[],int sizeofArray){
	for (int x =0; x< sizeofArray ;x++){
		cout << theArray[x]<<endl;
	}
}
