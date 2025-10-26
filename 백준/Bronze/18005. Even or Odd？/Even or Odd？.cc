#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    

    if(n%2 == 0 && (n/2)%2 == 0) cout << 2;
    else if(n%2 == 0 && (n/2)%2 == 1) cout << 1;
    else cout << 0;
}