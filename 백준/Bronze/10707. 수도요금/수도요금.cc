#include <iostream>
using namespace std;

int main() {
    int a,b,c,d,p;
    cin >> a>>b>>c>>d>>p;

    int x,y;
    x = a*p;
    if( p <= c){
        y = b;
    }
    else{
        y = b+(p-c)*d;
    }

    int r = x<y ? x: y;

    cout << r;
}