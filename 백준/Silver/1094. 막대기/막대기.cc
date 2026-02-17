#include <iostream>
using namespace std;

int main() {
    //64 32 16 8 4 2 1
    int n;
    cin >> n;
    int cnt = 0;
    int sum = 0;
    int k = 64;
    for(int i = 0 ; i < 7; i++){ 
        if(k <= (n-sum)) {
            sum += k;
            //cout << k <<endl;
            cnt ++;
        }
        k = k/2;
        if(sum == n) break;
    }
    cout <<cnt;
}