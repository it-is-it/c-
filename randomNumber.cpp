#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(0));
    // srand(215); // passing own random numbers
    for (int x = 1; x < 25; x++)
    {
        cout << 1 + (rand() % 6) << endl;
    }
    return 0;
}