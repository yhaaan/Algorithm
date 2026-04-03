#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cin >> a>>b >> c >>d;
    int ans =  c + b < a+d ? c+b : a+d;
    cout << ans;
}