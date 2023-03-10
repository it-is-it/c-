#include <iostream>
using namespace std;

class birthday{
    public:
    birthday(int d,int m ,int y);
    void printDate();
    private:
    int month;
    int day;
    int year;
};

class people{
    public:
        people(string x, birthday bo);
        void printInfo();
    private:
      string name;
      birthday dateofBirth;
};

int main()
{
    birthday bobj (28,12,2002);
	people info("IT the bot", bobj);
    info.printInfo();
	return 0;
}
birthday::birthday(int d,int m,int y)
{
    day =d;
    month =m;
    year = y;
}

people::people(string x, birthday bo)
:name (x), dateofBirth(bo){}

void birthday::printDate(){
    cout<< day <<"/"<< month <<"/"<< year <<endl;
}

void people::printInfo(){
     cout<< name <<" was born on ";                  
     dateofBirth.printDate();
}