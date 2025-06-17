#include <iostream>
using namespace std;

int t;
int n;
long long arr[102];
int main(void){
    cin >> t;
    arr[1] = 1;
    arr[2] = 1;
    arr[3] = 1;
    arr[4] = 2;
    arr[5] = 2;
    for(int i = 6; i < 101; i++){
        arr[i] = arr[i-1] + arr[i-5];
    }
    for(int i = 0; i < t; i++){
        cin >> n;
        cout << arr[n] << "\n";
    }
}

//1 2 3 4 5 6 7 8 9 1011 12 13 14 15 16 17
//1 1 1 2 2 3 4 5 7 9 12 16 21 28 37 49 65 
//x 0 0 1 0 1 1 1 2 2 3  4  5  7  9  12 16