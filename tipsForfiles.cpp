n#include <iostream>
#include <fstream> //file's headers file
using namespace std;

int main()
{

    ofstream iceFile("fire1.txt");

    if (iceFile.is_open())
    {
        cout << "okay the file is open" << endl;
    }
    else
    {
        cout << "you messed up" << endl;
    }

    iceFile << "I don't love fire but fire loves me! \n";
    iceFile.close();
    return 0;
}
