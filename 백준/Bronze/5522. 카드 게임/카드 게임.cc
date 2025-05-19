#include <iostream>
using namespace std;

int main() {
    int n;
    n = 5;
    int sum = 0;
    int k;
    for(int i =0; i<n; i++){
        cin >> k;
        sum += k;
    }
    cout << sum;
}