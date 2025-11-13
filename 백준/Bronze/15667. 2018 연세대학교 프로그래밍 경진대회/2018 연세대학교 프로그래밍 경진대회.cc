#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //k*k = n -k -1;
    for(int i = 1 ; i <= 100; i++){
        if(i*i+i+1 == n){
            cout <<i;
            return 0 ;
        }
    }
}