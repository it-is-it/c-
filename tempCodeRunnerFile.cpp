#include <iostream>
using namespace std;

class sally{
    public:
    sally();
    void printCrap();
    protected:
    public:
};

int main()
{
	sally so;
    Cout<<"omg wtf on my shoe?";
    sally *sp = &so;

    sallyObject.printCrap(); //accessinng through object
    sallyPointer->printCrap(); //accessing through pointer

	return 0;
}

sally::sally(){
    cout<<"Is this the constructor? ....yeah this is"<<endl;
}
sally::~sally(){
    cout<<"Is this the deconstructor? ....yeah this is"<<endl;
}

