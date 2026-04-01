#include <iostream>
using namespace std;

bool isP(int n){
    for(int i = 2; i < n; i++){
        if(n%i == 0) return false;
    }
    return true;
}

int main() {
    int n,k;
    cin >> n >> k;
    if(isP(n) && isP(n+k*1000000)) cout << "Yes";
    else cout << "No";
}