#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int a=2;
    int b=a;
    cout<<"Normal variable: "<<endl;
    cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    b=b+5;
    cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
    // when the value of b is changed the value of a will not be changed

    int x=3;
    int &y=x;
    cout <<" Refrence variable : "<<endl;
    cout << "x=" << x <<"\t" <<"y="<< y << endl;
    y=y+5;
    cout << "x=" << x <<"\t" <<"y="<< y << endl;
    // when value of y is changed the value of x is also changed
    return 0;
}