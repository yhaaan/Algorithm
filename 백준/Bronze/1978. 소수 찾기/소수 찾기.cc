#include<iostream>
using namespace std;



bool isPrime(int n);
int main() {
    int n,num,cnt=0;
    cin >> n;
    for (int i = 0;i < n;i++) {
        cin >> num;
        if (isPrime(num)) 
            cnt++; 
    }
    cout << cnt;

}


bool isPrime(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= n / 2;i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}