#include <iostream>
using namespace std;

class Sally{
    public:
        int num;
        Sally();
        Sally(int);
        Sally operator+(Sally);
    private:
            int h;
};

int main()

{
	Sally a(34);
	Sally b(21);
	Sally c;

    c=a+b;

    cout<<c.num<<endl;
}

Sally::Sally(){}
Sally::Sally(int a)
{
    num =a;
}

Sally Sally::operator+(Sally aso){
    Sally brandnew;
    brandnew.num = num + aso.num;
    return (brandnew);
}