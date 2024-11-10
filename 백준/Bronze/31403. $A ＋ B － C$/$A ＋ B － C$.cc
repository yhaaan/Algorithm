#include <iostream>
using namespace std;

int main() {
    int a,b,c,n,b1;
    cin >> a >> b >> c;
    cout << a+b-c << endl;
    n=10;
    b1 = b;
    while(b1/10>0){
        n=n*10;
        b1=b1/10;
    }
    cout << a*n+b -c ;
    return 0;
}