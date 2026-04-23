#include <iostream>
using namespace std;

int arr[101];
int main() {
    int n,m;
    cin>>n >> m;

    for(int i = 0; i < 101; i++){
        arr[i] = i*i;
    }

    int sum = 0;
    int minnum = 99999;
    for(int i = 0 ; i < 101 ; i++){
        if(arr[i] >= n && arr[i] <= m){
            if(minnum > arr[i]) minnum = arr[i];
            sum += arr[i];
        }
    }

    if(sum == 0){
        cout << -1;
        return 0;
    } 
    cout << sum;
    cout <<endl << minnum;
}