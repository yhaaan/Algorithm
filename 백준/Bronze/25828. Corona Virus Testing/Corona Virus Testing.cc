#include <iostream>
using namespace std;

int main() {
    int g,p,t;
    cin >> g >>p >>t;

    int a = g + p*t;
    int b = p*g;
    if(a > b) cout << 1;
    else if (a<b) cout << 2;
    else cout << 0;
}