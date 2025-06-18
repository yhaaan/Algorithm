#include <iostream>
using namespace std;

int n;
int k;
long long arr[31][31];
int main(void){
    cin >> n >> k;
    arr[1][1] = 1;
    for(int i = 2; i <= 30; i++){
        for(int j = 1; j <= i ; j++){
            if(j == 1 || j == i){
                arr[i][j] = 1;
            }
            else{
                arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
            }
        }
    }

    cout << arr[n][k];
}
