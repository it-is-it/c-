#include <iostream>
using namespace std;

class mother{
    public:
         mother();
         ~mother();

};

class daughter:protected mother  //can't inherit private
{
    public:
        daughter();
        ~daughter();
};

int main()
{
    daughter tina;
}
mother::mother(){
   cout<<"Mother constructors called!"<<endl;
}

mother::~mother(){
   cout<<"Mother Deconstructors called!"<<endl;
}
daughter::daughter(){
   cout<<"Daughter constructors called!"<<endl;
}

daughter::~daughter(){
   cout<<"Daughter Deconstructors called!"<<endl;
}
