#include <iostream>
using namespace std;

bool c(int n){
    int a[10] = {0,0,0,0,0,0,0,0,0,0};
    //for(int i = 0;i<10;i++) a[i] = 0;
    while(n>0){
        int k = n%10;
        if(a[k] == 1) {
            return false;
        }
        a[k] = 1;
        n = n/10;
    }
    return true;
}


int main() {
    int a,b;
    
    while(cin >> a>>b){
        int cnt = 0;
        for(int i = a; i<=b; i++){
            if(c(i)) cnt ++;
        }
        cout << cnt << "\n";
    }
}