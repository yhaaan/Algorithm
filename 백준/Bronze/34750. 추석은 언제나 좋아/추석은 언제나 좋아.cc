#include <iostream>
using namespace std;

int main() {
    int n;
    int a,b;
    cin >> n;
    if(n >= 1000000) {
        a = n*0.2;
        b = n*0.8;
        cout << a <<" " << b;
    }
    else if(n>= 500000) cout << n*0.15 <<" " << n*0.85;
    else if(n>= 100000) cout << n*0.1 <<" " << n*0.9;
    else cout << n*0.05 <<" " << n*0.95;
}