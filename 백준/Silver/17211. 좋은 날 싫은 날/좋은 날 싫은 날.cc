#include <iostream>
using namespace std;

int main() {
    float good[101];
    float bad[101];
    
    int n ,k;
    cin >> n >> k;
    float gg,gb,bg,bb;
    cin >> gg >> gb >> bg>> bb;

    if(k == 0) good[0] = 1;
    
    for(int i = 1; i <= 100;i ++){
        good[i] = good[i-1] *gg + (1-good[i-1]) * bg;
        //cout << "good[" << i << "] : " << good[i] <<endl; 
    }

    int ans = good[n]*1000;
    cout << ans << endl << 1000 - ans;
    
}