#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long a,b,c;
    cin >> a>>b>>c;

    long double r1 = (long double)(a * b) / c;
    long double r2 = (long double)(a * c) / b;

    cout << (long long)floor(max(r1, r2)) << '\n';
    
}