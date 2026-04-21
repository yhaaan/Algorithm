#include <iostream>
using namespace std;

int main() {
    int arr[101] ={0,};
    int n;
    int k;
    int cnt = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> k;
        if(arr[k] == 0) arr[k] = 1;
        else if(arr[k] == 1) cnt ++;
    }
    cout << cnt;
}