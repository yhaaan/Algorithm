#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b>>c;
    int sum = a+b+c;
    if(sum > 21) cout << 0;
    else cout << 1;
}