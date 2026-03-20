#include <iostream>
using namespace std;

int main() {
    int n[3];
    for(int i =0 ; i<  3; i ++){
        cin >> n[i];
    }

    for(int j = 0; j < 3; j++){
    for(int i = 0 ; i < 2; i++){
        if(n[i] < n[i+1]){
            int k = n[i];
            n[i] = n[i+1];
            n[i+1] = k;
        }
    }
    }

    cout << n[1];
}