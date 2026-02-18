#include <iostream>
using namespace std;

int main() {
    long long n,m,k;
    long long sum = 0;
    cin >> n >> m;
    for(int i =0; i < n ; i++){
        cin >> k;
        sum += k -1;
    }
    if(sum < m) cout << "OUT";
    else cout <<"DIMI";
}