#include <iostream>
using namespace std;

int h;
int cnt;

void dam(int k){
    h -= k;
    if(h <= 0)
        cout << cnt;    
}

int main() {
    int n;
    cin >> n >> h;

    int c;
    cnt = 0;
    for(int i = 0 ; i < n ; i++){
        cin >> c;
        cnt ++;
        dam(c);
        if(h <= 0) return 0;
        
    }
    cout << -1;
}