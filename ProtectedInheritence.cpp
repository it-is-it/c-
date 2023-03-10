#include <iostream>
using namespace std;

class mother{
    public:
        int publicv;
    protected:
     int protectedv;
    private:
    int privatev;
};
class daughter:protected mother  //can't inherit private
{
    public:
       void Sayname();
        daughter();
};

int main()
{
    daughter tina;
    tina.Sayname();
}

void daughter::Sayname(){
    cout<<"I am the Robetrs. "<<endl;
}
daughter::daughter(){}