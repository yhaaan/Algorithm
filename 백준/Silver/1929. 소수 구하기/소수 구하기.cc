#include <iostream>
using namespace std;

int main() {
    int m,n;
    int prime[1000001] = {0,};
    prime[1] = 1;
    cin >> m >> n;
    for(int i = 2; i<n/2+1; i++){
        if(prime[i] == 0){
            for(int j = 2 ; j*i < n+1; j++){
                prime[i*j] = 1;
            }
        }
    }


    for(int i = m; i< n+1 ;i++){
        if(prime[i]== 0)
            cout << i << '\n';
    }
}