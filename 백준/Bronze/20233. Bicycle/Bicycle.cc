#include <iostream>
using namespace std;


int main() {
    int a,x,b,y,t;
    cin >> a>>x>>b>>y >>t;
    int pa,pb;
    int ta,tb;
    ta = t;
    tb = t;
    if(ta > 30) ta -= 30;
    else ta = 0;
    pa = a + x*ta*21;

    if(tb > 45) tb -= 45;
    else tb = 0;
    pb = b + y*tb*21;

    cout << pa <<" " <<pb;
}