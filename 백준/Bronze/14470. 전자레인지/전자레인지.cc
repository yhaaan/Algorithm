#include <iostream>
using namespace std;

int main() {
    int ans = 0;
    int a,b,c,d,e;
    cin >> a >> b >> c >> d >> e;
    if(a>0){
        ans = (b-a)*e;
    }
    else if(a == 0){
        ans = b*e + d;
    }
    else{
        ans = b*e + d + (0-a)*c;
    }
    cout << ans;
}