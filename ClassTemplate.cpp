#include <iostream>
using namespace std;

template <class T>
class Ice
{
    T first, second;

public:
    Ice(T a, T b)
    {
        first = a;
        second = b;
    }
    T bigger();
};

template <class T>
T Ice<T>::bigger()
{
    return (first > second ? first : second);
}

int main()
{
    Ice<int> io(258, 105);
    cout << io.bigger() << endl;
    return 0;
}