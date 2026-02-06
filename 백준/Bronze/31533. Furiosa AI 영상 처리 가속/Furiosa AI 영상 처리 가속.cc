#include <iostream>
using namespace std;

int main() {
    float a;
    float m,n;
    cin >> a;
    cin >> m >> n;
    
    float mx,mn;
    
    if(m < n){
        mx = n;
        mn = m;
    }
    else{
        mx = m;
        mn = n;
    }
    mn = mn/a;
    
    if(mn*2 < mx) cout << mn*2;
    else cout << mx;
}