#include <iostream>
#include <fstream> 
using namespace std;

int main()
{

    ofstream theFile("players.txt");

    cout << "enter player id, name and money" << endl;
    cout << "press ctrl + z to quit \n"
         << endl;

    int idNumber;
    string name;
    double money;

    while (cin >> idNumber >> name >> money)
    {
        theFile << idNumber << " " << name << " " << money << " " << endl;
    }
    theFile.close();
    return 0;
}
