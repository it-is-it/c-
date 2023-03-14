#include <iostream>
#include <fstream>
using namespace std;
int get();
void displayitems(int);

int main()
{
    int what;
    what = get();

    while (what != 4)
    {
        switch ((what))
        {
        case 1:
            displayitems(1);
            break;

        case 2:
            displayitems(2);
            break;

        case 3:
            displayitems(3);
            break;

        default:
            cout << "wrong input!!";
            break;
        }
        what = get();
    }
    return 0;
}

// get function
int get()
{
    int choice;

    cout << "1 - just plain items" << endl;
    cout << "2 - helpful items" << endl;
    cout << "3 - harmful items" << endl;
    cout << "4 - quit program" << endl;

    cin >> choice;
    return choice;
}

// displayitems
void displayitems(int x)
{
    ifstream objectFile("objects.txt");
    string name;
    double power;

    if (x == 1)
    {
        while (objectFile >> name >> power)
        {
            if (power == 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 2)
    {
        while (objectFile >> name >> power)
        {
            if (power > 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
    if (x == 3)
    {
        while (objectFile >> name >> power)
        {
            if (power < 0)
            {
                cout << name << ' ' << power << endl;
            }
        }
    }
}