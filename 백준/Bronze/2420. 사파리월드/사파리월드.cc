#include <iostream>
using namespace std;

int main() {
    long long n,m;
    cin >> n >> m;
    long long ans  =  n > m ? n-m: m-n;
    cout << ans;
}