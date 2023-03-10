#include <iostream>
using namespace std;

class sally{
    public:
    sally();
    ~sally();
    protected:
    private:
};

int main()
{
	sally so;
    cout<<"omg wtf on my shoe?"<<endl;

	return 0;
}

sally::sally(){
    cout<<"Is this the constructor? ....yeah this is"<<endl;
}

sally::~sally()
{cout<<"Is this the deconstructor? ....yeah this is "<<endl;
}
