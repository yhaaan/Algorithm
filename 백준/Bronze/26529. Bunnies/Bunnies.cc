#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[46];
    arr[0] = 1;
    arr[1] = 1;
    for(int i = 2 ; i < 46; i++){
        arr[i] = arr[i-1] + arr[i-2]; 
    }
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        int k;
        cin >> k;
        cout << arr[k] << endl;
    }
}