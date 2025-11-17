#include <iostream>
using namespace std;

int main() {
    int n,k;
    int a[2001] = {0,};
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> k;
        a[k+1000]++;
    }

    
    for(int i = 0 ; i < 2001 ; i ++){
        if(a[i] > 0){
            cout << i -1000<<" ";
        }
    } 
}