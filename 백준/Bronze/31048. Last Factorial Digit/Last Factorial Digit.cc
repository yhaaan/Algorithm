#include <iostream>
using namespace std;

int fac(int k){
    int sum = 1;
    for(int i =1; i <= k; i ++){
        sum *= i;
    }
    return sum;
}

int main() {
    int n;
    int k;
    cin >> n;
    for(int i = 0; i < n ; i ++){
        cin >> k;
        cout << fac(k)%10 << endl;
    }
}