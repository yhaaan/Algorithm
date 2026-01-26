#include <iostream>
using namespace std;

int c(int n,int k,int b = 0){
    int cnt = 2;
    int m = n - k;
    if(b == 1){
        cout <<n <<" " << k <<" ";
    }
    while(m >= 0){
        if(b == 1) cout <<m << " ";
        cnt ++;
        n = k;
        k = m;
        m = n-k;
    }
    return cnt;
}

int main() {
    int n;
    cin >> n;
    int m = 0;
    int mi = 0;
    for(int i = 1; i <= n; i++){
        int k = c(n,i);
        if(k > m){
            m = k;
            mi = i;
        }
    }
    cout << m <<endl;
    c(n,mi,1);
}