#include <iostream>
using namespace std;

int main() {
    int m;
    double fac = 1;
    int dir = 1;
    int a,b,c;
    cin >> m;
    for(int i = 0; i < m ; i++){
        cin >> a>>b>>c;
        if(c == 1) dir = dir * -1;
        
        fac = fac * b/a;
    }

    int ans = dir == -1 ? 1 : 0;
    cout << ans << " " << (long long)fac;
    /*
    for(int i = 0 ; i <= m;i ++){
        cout << k[i] <<" ";
    }
    */
}