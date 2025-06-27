#include <iostream>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    int cnt = 0;



    cnt += n;
    while(n>=m){
        n = n/m;
        cnt += n;
    }
    cout << cnt;

}