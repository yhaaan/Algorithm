#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int r = 0;
    int k ;
    for(int i = 0; i < n; i++){
        cin >> k;
        if(k%2 == 1) r++;
    }

    cout << r;
}