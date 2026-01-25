#include <iostream>
using namespace std;

int main() {
    int n;
    int a[21];
    a[0] = 0;
    a[1] = 1;
    for(int i = 2; i <=20 ; i++){
        a[i] = a[i-1] + a[i-2];
    }
    cin >> n;
    cout << a[n];
    
}