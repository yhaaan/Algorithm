#include <iostream>
using namespace std;

int main() {
    int k,n,m;
    cin >> k >> n >> m;
    int sum = k*n - m;
    if(sum < 0) sum = 0;
    cout << sum;
}