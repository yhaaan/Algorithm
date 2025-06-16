#include <iostream>
using namespace std;

int n;
int step[301]; // 계단 점수
int dp [301]; // 계단 까지의 점수
int main(void){
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> step[i];
    }

    
    dp[0] = step[0];
    dp[1] = step[0] + step[1];
    dp[2] = max(step[0],step[1]) + step[2];
    if(n < 4){
        cout <<dp[n-1];
        return 0;
    }
    for(int i =3 ; i < n ; i++){
        dp[i] = max(dp[i-2] , dp[i-3] + step[i-1]) + step[i];
        
    }
    cout << dp[n-1];
}
