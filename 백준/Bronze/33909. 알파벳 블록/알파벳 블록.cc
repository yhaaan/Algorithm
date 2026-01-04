#include <iostream>
using namespace std;

int main() {
    //s:2 , c:4 , o:1 , n:1
    //sn : 3 , co 6
    int s,c,o,n;
    cin >> s>>c>>o>>n;
    int sn , co;
    sn = s+n;
    co = c + o*2;
    if(sn/3 < co/6) cout << sn/3;
    else cout << co/6;
}