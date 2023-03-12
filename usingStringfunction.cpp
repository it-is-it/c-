#include <iostream>
#include <string>
using namespace std;

int main()
{
	string mystring;
    cout<<"What's your name?"<<endl;
	getline(cin, mystring);
	cout << "Hello " <<mystring << endl;
    cout <<"What's your favriote team?"<<endl;
    getline(cin, mystring);
    cout<<"I like "<< mystring << " too!" <<endl;
	return 0;
}