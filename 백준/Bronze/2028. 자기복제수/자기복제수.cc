#include <iostream>
using namespace std;


void cn(int n){
    //자릿수 부터
    int d=0;
    int k = n;
    while(k>0){
        k = k/10;
        d++;
    }
    int nn = n*n;
    int temp = 0;
    for(int i = 0; i< d; i++){
        if(nn%10 != n%10){
            cout << "NO\n";
            return;
        }
        nn /=10;
        n/=10;
    }
    cout <<"YES\n";
}

int main() {
    int n,k;
    cin >> n;
    for(int i = 0;i < n ; i++){
        cin >> k;
        cn(k);
    }
}