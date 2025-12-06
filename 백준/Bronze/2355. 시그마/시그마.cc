#include <iostream>
using namespace std;

int main() {
    long long a,b;
    cin >> a >>b;
    long long maxn,minn;
    if(a > b) {
        maxn =a;
        minn =b;
    }
    else{
        maxn = b;
        minn = a;
    }
    int sum = 0;
    sum = (maxn+minn)*(maxn-minn+1)/2;
    cout << sum;
}