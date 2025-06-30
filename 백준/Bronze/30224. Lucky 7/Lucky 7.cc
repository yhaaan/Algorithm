#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    int a1 = 0,a2 = 0;
    cin >> n;
    int k = n;
    while(k > 0){
        if(k%10 == 7){
            a1 = 1;
            break;
        }
        k = k/10;
    }

    if(n%7 == 0){
        a2 = 1;
    }

    if(a1 == 0 && a2 == 0){
        cout << 0;
    }
    if(a1 == 0 && a2 == 1){
        cout << 1;
    }
    if(a1 == 1 && a2 == 0){
        cout << 2;
    }
    if(a1 == 1 && a2 == 1){
        cout << 3;
    }
}


