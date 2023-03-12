#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

int main()
{
    int i,l;
    int m[5];
    char sub[5][20]={"math","discrete","stat","Oop","micro"};
    float total=0.0 , per;
    cout<<"Enter the marks of math, discrete,stat,Oop,microprocessor: "<<endl;
    for(i=0;i<5;i++){
        cin>>m[i];
    }
    cout<<"\t"<<"Subject"<<setw(15)<<"Marks"<<endl;
    cout<<"\t"<< "------------------" <<endl;
    for(i=0;i<5;i++){
        total=total+m[i];
        l=strlen(sub[i]);
        cout<<"\t"<<sub[i]<<setw(22-l)<<m[i]<<endl;
    }
    per=total/5;
    cout<<"\t"<< "------------------" <<endl;
    cout<<"\t"<<"Total"<<setw(17)<<total<<endl<<"\t";
    cout<<"Percentage"<<setw(12)<<setprecision(2)<<per<<endl;
    return 0;
}