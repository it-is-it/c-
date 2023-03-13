#include <iostream>
#include <fstream> //file's headers file
using namespace std;

int main()
{

    ofstream iceFile;
    iceFile.open("fire.txt");

    iceFile << "I love fire and fire loves me! \n";

    iceFile.close();
    return 0;
}
