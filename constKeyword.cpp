#include <iostream>
using namespace std;

class sally{
    public:
        sally();
        void printNull();
        void printNull2() const;
    protected:
    private:
};

int main()
{
	sally so;
    so.printNull();

	const sally constso;
    constso.printNull2();

	return 0;
}

sally::sally(){
}

void sally::printNull(){
    cout<<"I am a regular function."<<endl;
}

void sally::printNull2() const {
    cout<<"I am a constant function."<<endl;
}