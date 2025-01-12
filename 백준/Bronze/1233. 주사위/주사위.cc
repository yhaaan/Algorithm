#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a,b,c;
    int arr[81] = {0,};
    
    cin >> a>>b>>c;
    for(int i = 1; i<=a;i++){
        for(int j= 1; j<=b ;j++){
            for(int k = 1; k<=c; k++){
                arr[i+k+j] ++;
            }
        }
    }
    cout << distance(arr, max_element(arr, arr + 81));
    
}