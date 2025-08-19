#include <iostream>
using namespace std;
int main() {
    int n;
    int a;
    int b;
    int re = 100000;
    cin >> n;
    for(int i =0 ; i< n ; i ++){
        cin >> a >>b;
        if(a<=b && b <= re) re = b;
    }
    if(re ==100000) cout << -1;
    else cout << re;
    
}