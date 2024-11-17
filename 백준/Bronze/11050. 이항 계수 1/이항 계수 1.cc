#include <iostream>
using namespace std;
int fac(int n);
int main() {
    int n,k;
    int res;
    cin >> n >> k;
    res = fac(n)/(fac(k)*fac(n-k));
    cout <<res;
    return 0;
}


int fac(int n){
    int result= 1;
    for(int i =1 ; i<=n;i++){
        result *= i;
    }
    return result;
}