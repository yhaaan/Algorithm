#include <iostream>
using namespace std;


void h(int k){
    for(int i = 0 ; i < k ; i++){
        cout << "=";
    }
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int k;
    for(int i = 0; i < n ; i++){
        cin >> k;
        h(k);  
    }
}