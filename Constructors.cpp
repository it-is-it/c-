#include <iostream>
using namespace std;
const double PI{3.14};
class cylinder
{
    // member variables
    double base{1};
    double height{1};

public:
    // constructors
    cylinder()
    {
    }
    cylinder(double base1, double height1)
    {
        base = base1;
        height = height1;
    }

    // functions
    double volume()
    {
        return PI * base * height;
    }
};

int
main()
{
    cylinder cylinder1;
    cout<<"volume of cylinder is : "<<cylinder1.volume()<<endl;
    return 0;
}
