#include <iostream>
using namespace std;

int main() {
    int arr[99999] = {0,};
    int n,k;
    cin >>n;
    for(int i =0 ; i<= n;i++){
        arr[i] = 0;
    }
    for(int i =0 ; i< n-1;i++){
        cin >> k;
        arr[k] = 1;
    }

    for(int i = 1 ; i <= n ; i++){
        if(arr[i] == 0){
            cout << i;
        }
    }
}