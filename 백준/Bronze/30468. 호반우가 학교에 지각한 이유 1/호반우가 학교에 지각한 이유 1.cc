#include <iostream>
using namespace std;

int main() {
    int s,d,i,l,n;
    int sum = 0;
    cin >> s >>d >>i >>l >> n;
    sum = s+d+i+l;
    int ans = n*4-sum;
    if(ans < 0 ){
        cout << 0;
    }
    else{
        cout <<ans;
    }
}