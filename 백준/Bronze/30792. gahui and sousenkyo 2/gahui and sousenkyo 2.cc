#include <iostream>
using namespace std;

int main() {
    int n ;
    cin >> n;
    int k,m,cnt = 0;
    cin >> k;
    for(int i = 0 ; i < n-1 ; i ++ ){
        cin >> m;
        if( m > k )
            cnt ++;  
    }
    cout << cnt+1;
}