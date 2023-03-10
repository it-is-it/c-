#include <iostream>
using namespace std;

class mother{
    public:
        mother();
        void Sayname();
};
class daughter:public mother
{
    public:
        daughter();
};

int main()
{
	mother mom;
    mom.Sayname();
    daughter tina;
    tina.Sayname();
}

mother::mother(){}
void mother::Sayname(){
    cout<<"I am the Robetrs. "<<endl;
}
daughter::daughter(){}