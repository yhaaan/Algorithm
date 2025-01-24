#include <iostream>
using namespace std;

int main() {
    int n,m;
    int arr[101];
    for(int i = 0 ; i< 101;i++){
        arr[i] = i;
    }
    cin >> n >> m;
    int a,b,t;
    for(int i = 0; i < m; i ++){
        cin >> a >> b;
        for(int j = 0; j<(b-a+1)/2; j++){
            
            t = arr[a+j];
            arr[a+j] = arr[b-j];
            arr[b-j] = t;
            
        }
    }

    for(int i =1; i <= n ;i++){
        cout << arr[i] << ' '; 
    }
}