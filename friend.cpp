#include <iostream>
using namespace std;

class stankFist{
    public:
        stankFist(){stinkyVar=0;}
    private:
            int stinkyVar;

     friend void stinkyFriend (stankFist &sfo);
};

void stinkyFriend(stankFist &sfo){
    sfo.stinkyVar=99;
     cout<< sfo.stinkyVar <<endl;
}
int main()
{
	stankFist bob;
    stinkyFriend(bob);
	return 0;
}
