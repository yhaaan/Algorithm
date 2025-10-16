#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int k = 0;
    cin >> k;
    while(k != -1){
        sum += k;
        cin >> k;
    }

    cout << sum;
}