#include<iostream>
using namespace std;

int main()
{
    int n;
    do{
        cout<<"Enter the integers:";
        cin>>n;
    }while(n!=0);
    cout << "You are out of the loop."<<endl;
    return 0;
}