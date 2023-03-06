#include<iostream>
using namespace std;

int main()
{
    int ival=50;
    int *p=&ival;
    cout << "........................................ "<<endl;
    cout << "ival= "<<ival<<endl<<"p="<<p<<endl<<"*p = "<<*p<<endl;
    *p=51;
    cout << "........................................ "<<endl;
    cout << "New ival= "<<ival<<endl<<"New p="<<p<<endl<<"New *p = "<<*p<<endl;
    ival=53;
    cout << "........................................ "<<endl;
    cout << "New ival= "<<ival<<endl<<"New p="<<p<<endl<<"New *p = "<<*p;
    return 0;
}