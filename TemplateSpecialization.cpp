#include <iostream>
using namespace std;

template <class T>
class spunky
{
public:
    spunky(T x)
    {
        cout << x << " is not a character!" << endl;
    }
};

template<>
class spunky<char>{
    public:
    spunky(char x)
    {
        cout << x << " is indeed a character!" << endl;
    }
};

int main()
{
    spunky<int> obj1(7);
    spunky<double> obj2(99.34);
    spunky<char> obj3('q');
    return 0;
}