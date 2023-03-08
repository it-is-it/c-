// function overloading
#include <iostream>
using namespace std;

void printNumber(int x)
{
    cout << "I am printing an integer now whose value is: " << x << endl;
};
void printNumber(float x)
{
    cout << "Now I am printing an float whose value is: " << x << endl;
};

int main()
{
    int a = 54;
    float b = 32.4848;

    printNumber(a);
    printNumber(b);
    return 0;
}