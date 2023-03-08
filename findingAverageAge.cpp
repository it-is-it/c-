#include <iostream>
using namespace std;

int main()
{
    int age;
    int ageTotal = 0;
    int count = 0;
    cout << "Enter first person age or -1 to quit" << endl;
    cin >> age;

    while (age != -1)
    {
        ageTotal += age;
        count++;

        cout << "Enter next person's age or -1 to quit" << endl;
        cin >> age;
    }

    cout << "Number of people entered: " << count << endl;
    cout << "Average Age: " << (ageTotal / 3) << endl;
    return 0;
}
