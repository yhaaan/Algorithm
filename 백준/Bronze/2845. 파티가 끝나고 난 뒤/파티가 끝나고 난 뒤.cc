#include <iostream>
using namespace std;

int main() {
    int l,p;
    int k;
    cin >> l >> p ;
    for(int i = 0 ; i < 5 ; i++){
        cin >> k;
        cout << k - l*p <<" ";
    }
}