// unary scope resolution operator
#include <iostream>
using namespace std;

int tuna = 69;
int main()
{
    double tuna = 20;
    cout << tuna << endl;
    cout << ::tuna << endl;
    return 0;
}