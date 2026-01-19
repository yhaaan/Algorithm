#include <iostream>
using namespace std;

int main() {
    int n;
    bool dp[1001];
    cin >> n;
    dp[1] = false; dp[2] = true; dp[3] = false;
    for(int i = 4; i <=n; i++){
        dp[i] = dp[i-2] ? true:false;
    }

  
    if(dp[n]) cout <<"SK";
    else cout << "CY";
    
}