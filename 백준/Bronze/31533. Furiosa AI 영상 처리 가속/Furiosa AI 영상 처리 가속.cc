#include <iostream>
using namespace std;

int main() {
    float a;
    float m,n;
    cin >> a;
    cin >> m >> n;
    m = m/a;
    n = n/a;
    float mx,mn;
    
    if(m < n){
        mx = n;
        mn = m;
    }
    else{
        mx = m;
        mn = n;
    }
    
    if(mn*2 < mx) cout << mn*2;
    else cout << mx;
}