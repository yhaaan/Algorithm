#include <iostream>
using namespace std;

int main() {
    int l,a,b,c,d;
    cin >> l >> a>>b>>c>>d;
    int maxn = (a+c-1)/c > (b+d-1)/d ? (a+c-1)/c :(b+d-1)/d;
    cout << l-maxn;
}