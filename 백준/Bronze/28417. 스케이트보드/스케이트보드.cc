#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    int a[2] , b[5];
    int score,ms= 0;
    cin >> n;
    for(int i = 0 ;i  < n ; i ++ ){
        cin >> a[0] >> a[1] >> b[0] >> b[1] >> b[2] >> b[3] >> b[4];
        score = a[0] > a[1] ? a[0] : a[1];
        sort(b,b+5,greater<int>());
        score += b[0] + b[1];
        if(score > ms )
            ms = score;
    }

    cout << ms;
    return 0;
}