#include <iostream>
using namespace std;

class sally{
    public:
        sally(int a, int b);
        void print();
    protected:
    private:
        int regVar;
        const int constVar;
};

int main()
{
	sally so(3,87);
    so.print();
	return 0;
}

sally::sally(int a, int b)
: regVar(a),
 constVar(b)
{
}

void sally::print(){
    cout<<"regular var is: "<<regVar <<" and const variable is: "<<constVar<<endl;
}