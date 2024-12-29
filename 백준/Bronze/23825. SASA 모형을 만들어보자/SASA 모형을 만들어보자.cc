#include <iostream>
using namespace std;

int main() {
    int n,m;
    int res=0;
    cin >> n >> m;
    if( n< m)
        res = n/2;
    else
        res = m/2;
    cout << res;
    return 0;
}