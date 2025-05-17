#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    int cnt = 0;
    cin >> a>>b>>c;
    cnt += b/2;
    cnt += c;

    if(cnt > a ){
        cnt = a;
    }
    cout << cnt;
}