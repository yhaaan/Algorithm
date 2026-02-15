#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    long long sum =0;
    long long a;
    char d;
    int b;
    while (cin >> a >> d >> b) {
        sum += (a * 100) + b;
    }

    cout << sum/100 << ".";
    long long realb = sum % 100;
    if (realb < 10) {
        cout << "0";
    }
    cout << realb << "\n";
}