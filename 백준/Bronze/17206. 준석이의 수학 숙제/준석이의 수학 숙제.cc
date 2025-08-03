#include <iostream>
using namespace std;


int arr[80001];

void init(){
    arr[0] = 0;
    for(int i = 1; i <= 80000; i++){
        arr[i] += arr[i-1];
        if(i%3 == 0 || i%7 == 0){
             arr[i] += i;
        }
    }
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    init();
    int t;
    int n;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << arr[n] << "\n";
    }
    
}