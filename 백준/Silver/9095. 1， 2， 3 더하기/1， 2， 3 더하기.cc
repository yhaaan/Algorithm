#include <iostream>
using namespace std;

int main() {
    int arr[11];
    int n , t;
    arr[1] = 1;
    arr[2] = 2;
    arr[3] = 4;
    for(int i = 4; i<=10 ; i++){
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }

    cin >> t;
    for(int i = 0; i<t;i++){
        cin >> n;
        cout << arr[n] <<'\n';
    }
    
    return 0;
}