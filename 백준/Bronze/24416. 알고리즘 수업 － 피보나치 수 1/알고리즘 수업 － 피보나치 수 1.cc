#include <iostream>
using namespace std;
int arr[41]; 

void f(){
    arr[4] = 3;
    arr[3] = 2;
    arr[2] = 1;
    arr[1] = 1;
    for(int i = 3; i <= 40 ; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    
}
int main() {
    int n;
    f();
    cin >> n;
    cout << arr[n] << " " << n-2;
}