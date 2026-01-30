#include <iostream>
using namespace std;

int main() {
    int n,m;
    int a,d;
    int sn,sm;
    cin >> n >> m >> a>>d>>sn>>sm;
    bool ans = false;
    if(sn == 0) {
        if(a < sm && d == 0 || a > sm && d == 1)
            ans = true;
    }
    else if(sn == n){
        if(n%2 == 0 && d == 1 || n%2 != 0 && d == 0)
            ans = true;
    }

    if(ans == true) cout << "YES!";
    else cout << "NO...";
    
    
}