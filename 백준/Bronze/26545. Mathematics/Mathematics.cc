#include <iostream>
using namespace std;

int main() {
    int n;
    int sum =0;
    int k;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> k;
        sum += k;
    }
    cout << sum;
}