#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[10000];
    long long r = 0;
    cin >> n;
    for(int i =0; i<n;i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n ; i++){
        for(int j = 0; j < n; j++){
            int k;
            if(arr[i] > arr[j]) k = arr[i] - arr[j];
            else k = arr[j] - arr[i];
            r += k; 
        }
    }

    cout << r;
}