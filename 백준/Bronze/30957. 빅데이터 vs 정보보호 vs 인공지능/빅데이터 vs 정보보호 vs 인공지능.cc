#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    int arr[3] = {0,0,0};
    cin >> n;
    cin >> str;
    for(int i= 0; i < n; i++){
        if(str[i] == 'B') arr[0]++;
        if(str[i] == 'S') arr[1]++;
        if(str[i] == 'A') arr[2]++;
    }

    
    int maxi = -1;
    int maxn = 0;
    if( arr[0] >= arr[1] && arr[0] >= arr[2]) {
        maxi = 0;
        maxn = arr[0];
    }
    if( arr[1] >= arr[0] && arr[1] >= arr[2]) {
        maxi = 1;
        maxn = arr[1];
    }
    if( arr[2] >= arr[0] && arr[2] >= arr[1]) {
        maxi = 2;
        maxn = arr[2];
    }
    
    
    if(arr[0] == arr[1] && arr[0] == arr[2]){
        cout << "SCU";
        return 0;
    }
    for(int i =0; i < 3 ; i++){
        if(arr[i] == maxn){
            if(i == 0) cout << "B";
            if(i == 1) cout << "S";
            if(i == 2) cout << "A";
        }
    }
    
}