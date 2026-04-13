#include <iostream>
using namespace std;
int k(int n){
    int sum = 0;
    for(int i = 1; i <=n ; i++){
        for(int j = 1; j <= n ; j++)
            sum += i*j;
    }
    return sum;
}
int main() {
    int n;
    cin >> n;
    while(n != 0){
        cout << k(n) << endl;
        cin >> n;
    }
}