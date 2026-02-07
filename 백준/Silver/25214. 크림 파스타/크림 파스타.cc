#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,ans;
    int mn= 1e9 + 7,mx = -1;
    cin >> n;
    ans = 0;
    for(int i =0;i<n;i++){
        cin >> k;
        if(mn > k) {
            mn = k;
            mx = k;
        }
        if(mx < k) mx = k;
        if(ans < mx - mn) ans = mx -mn;
        cout << ans <<" ";
    }
}