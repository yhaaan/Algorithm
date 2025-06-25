#include <iostream>
using namespace std;

int n;
long long arr[1001];
int main(void){
    cin >> n;
    arr[1] = 1;
    arr[2] = 3;

    for(int i = 3; i <=1000;i++){
        arr[i] = arr[i-1] + arr[i-2]*2;
        arr[i] = arr[i]%10007;
        //cout << arr[i] <<endl;
        
    }

    cout << arr[n]%10007;
    
}
