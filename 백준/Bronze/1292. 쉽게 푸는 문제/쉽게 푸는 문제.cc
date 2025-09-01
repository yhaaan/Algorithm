#include <iostream>
using namespace std;
int arr[1002];
int main() {
    
    int k = 1;
    int s = 1;
    while(s < 1001){
        for(int i = 0; i < k; i++){
            arr[s] = k;
            s++;
        }
        k++;
    }

    int a,b;
    cin >> a>>b;
    int sum = 0;
    for(int i = a; i<=b;i++){
        sum += arr[i];
    }
    cout << sum;
}