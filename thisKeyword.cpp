#include <iostream>
using namespace std;

class Hannah{
    public:
        Hannah(int);
        void printCrap();
    private:
            int h;
};

void Hannah::printCrap(){
     cout<< "h= " <<h<< endl;
     cout<< "this->h =" <<this->h <<endl;
     cout<< "(*this).h =" << (*this).h<<endl;
}
int main()
{
	Hannah ho(23);
    ho.printCrap();
}

Hannah::Hannah(int num):h (num)
{
}