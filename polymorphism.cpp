#include <iostream>
using namespace std;

class enemy
{
public:
    void setAttackpower(int a)
    {
        attackpower = a;
    }

protected:
    int attackpower;
};
class ninja : public enemy
{
public:
    void Attack()
    {
        cout << "i am a ninja , ninja chop! - " << attackpower << endl;
    }
};
class monster : public enemy
{
public:
    void Attack()
    {
        cout << "monster will eat you - " << attackpower << endl;
    }
};

int main()
{
    ninja n;
    monster m;
    enemy *enemy1 = &n;
    enemy *enemy2 = &m;
    enemy1->setAttackpower(29);
    enemy2->setAttackpower(99);
    n.Attack();
    m.Attack();
    return 0;
}
