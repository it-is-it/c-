#include <iostream>
using namespace std;

class sally{
    public:
    sally();
    void printCrap();
    protected:
    private:
};

int main()
{
	sally sallyObject;
    sally *sallyPointer = &sallyObject;

    sallyObject.printCrap(); //accessinng through object
    sallyPointer->printCrap(); //accessing through pointer

	return 0;
}

sally::sally(){

}

void sally::printCrap(){
    cout<<"What do you need, man?"<<endl;
}
