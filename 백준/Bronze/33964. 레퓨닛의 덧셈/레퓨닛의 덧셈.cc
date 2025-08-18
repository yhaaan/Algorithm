#include <iostream>
using namespace std;

int num(int n){
    if(n == 1) return 1;
    if(n == 2) return 11;
    if(n == 3) return 111;
    if(n == 4) return 1111;
    if(n == 5) return 11111;
    if(n == 6) return 111111;
    if(n == 7) return 1111111;
    if(n == 8) return 11111111;
    if(n == 9) return 111111111;
    return -1;
}

int main() {
    int a,b;
    cin >> a>>b;
    cout << num(a) + num(b);
}