#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a;
    double m,n;
    cin >> a;
    cin >> m >> n;
    
    double mx,mn;
    
    if(m < n){
        mx = n;
        mn = m;
    }
    else{
        mx = m;
        mn = n;
    }
    mn = mn/a;

    cout << fixed;
    cout << setprecision(7);
    if(mn*2 < mx) cout << mn*2;
    else cout << mx;
}