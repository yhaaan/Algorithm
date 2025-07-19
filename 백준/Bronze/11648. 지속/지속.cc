#include <iostream>
using namespace std;

int cal(int n);
int main() {
    int n;
    int cnt = 0;
    cin >> n;
    while(n >= 10){
        n = cal(n);
        
        cnt ++;
    }
    cout << cnt;
}


int cal(int n){
    int r = 1;
    while(n>0){
        r *= n%10;
        n = n/10;
    }

    return r;
}