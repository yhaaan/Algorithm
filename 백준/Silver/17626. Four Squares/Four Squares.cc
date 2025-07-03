#include <iostream>
using namespace std;
int arr[50001];

int main(void){
    int n;
    cin >> n;

    for(int i = 1;i<= n ;i++){
        arr[i] = i;
        for(int j = 1; j*j <= i ; j++){
            if(arr[i-j*j] +1  < arr[i] ){
                arr[i] = arr[i-j*j] +1;
            }
        }
    }

    cout <<arr[n];
}


