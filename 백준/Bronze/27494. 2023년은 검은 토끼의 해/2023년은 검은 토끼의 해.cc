#include <iostream>
using namespace std;

bool c(int k){
    int arr[4] = {2,0,2,3};
    int t = 3;
    while(k > 0){
        if(k%10 == arr[t]){
            t --;
            if(t == -1) break;
        }
        k = k/10;
    }
    if(t == -1) return true;
    else return false;
}


int main() {
    int n ;
    int cnt = 0;
    cin >> n;
    for(int i = 1 ; i <= n ; i++){
         if(c(i)) {
             cnt ++;
         }
    }
    cout << cnt;
}