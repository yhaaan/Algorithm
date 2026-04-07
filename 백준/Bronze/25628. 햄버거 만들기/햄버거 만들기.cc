#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >>b;
    int ans = a/2 > b ? b : a/2;
    cout << ans;
}