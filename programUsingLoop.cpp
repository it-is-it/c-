#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int number;
    int total = 0;

    while (x <= 5)
    {
        cin >> number;
        x++;
        total += number;
    }
    cout << "Your total is " << total << endl;
    return 0;
}