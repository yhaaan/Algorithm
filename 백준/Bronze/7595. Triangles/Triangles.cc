#include <iostream>
using namespace std;

void s(int k){
    for(int i = 1 ; i <= k ; i++){
        for(int j = 0 ; j < i ; j++){
            cout << "*";
        }
        cout << "\n";
    }
    
}

int main() {
    int n;
    cin >> n;
    while(n != 0){
        s(n);
        cin >>n;
    }
}