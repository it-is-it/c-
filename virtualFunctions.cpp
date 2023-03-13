#include <iostream>
using namespace std;

class enemy{
    public:
    virtual void Attack(){};
};
class ninja : public enemy{
    public:
    void Attack(){
        cout<< " Ninja attack!! "<<endl;
    }
};
class monster : public enemy{
    public:
    void Attack(){
        cout<< " Monster attack!! "<<endl;
    }
};

int main(){
    ninja n;
    monster m;
    enemy *enemy1 =&n;
    enemy *enemy2 =&m;
    n.Attack();
    m.Attack();
    return 0;
}

