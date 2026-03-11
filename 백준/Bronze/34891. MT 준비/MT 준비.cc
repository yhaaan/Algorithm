#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    if(n == 0) cout << 0;
    else cout << (n-1)/m+1;
}