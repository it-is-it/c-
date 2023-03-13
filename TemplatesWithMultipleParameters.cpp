#include <iostream>
using namespace std;

template <class T, class U>
 T smaller(T a, U b){        //here t is integer cause x is passed as integer data type so if we have put U then it will be double as y.
        return (a<b?a:b);
    }


int main(){
    int x = 89;
    double y=43.54;
    cout << smaller(x,y) << endl;
    return 0;
}