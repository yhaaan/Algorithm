#include <iostream>
using namespace std;

int main() {
    int n,k;
    int min = 1000001;
    int max = -1;

    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> k;
        if(k < min) min = k;
        if(k > max) max = k;
    }
    cout << min * max;
}