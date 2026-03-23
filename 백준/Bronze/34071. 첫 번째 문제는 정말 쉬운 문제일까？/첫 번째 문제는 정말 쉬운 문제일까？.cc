#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[101];
    cin >> n;
    int mx=-1,mn = 9999;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
        if(arr[i] < mn) mn = arr[i];
        if(arr[i] > mx) mx = arr[i];
    }
    if(arr[0] == mx){
        cout << "hard";
    }
    else if(arr[0] == mn){
        cout <<"ez";
    }
    else
        cout <<'?';
}