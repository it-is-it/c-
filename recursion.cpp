// Recursion
#include <iostream>
using namespace std;

int factorialFinder(int x)
{
    if (x == 1 || x == 0)
    {
        return 1;
    }
    else
    {
        return x * factorialFinder(x - 1);
    }
}

int main()
{
    cout << "The factorial using recursion is: " << factorialFinder(5) << endl;
    return 0;
}