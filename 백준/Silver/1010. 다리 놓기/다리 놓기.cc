#include <iostream>
using namespace std;

int dp[31][31];

int main() {
    for(int i = 0; i < 30; i++){
        dp[i][0] = 1;
        dp[i][i] = 1;
    }
    for(int i = 1 ; i < 30 ; i++){
        for(int j = 1 ; j < 30; j++){
            dp[i][j] = dp[i-1][j-1] + dp[i-1][j]; 
        }
    }

    
    int n;
    int a,b;
    cin >> n;
    for(int i= 0 ; i < n ; i++){
        cin >> a>>b;
        cout << dp[b][a] << endl;
    }
}