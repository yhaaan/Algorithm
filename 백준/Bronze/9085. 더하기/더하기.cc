#include <iostream>
using namespace std;
int main() {
    int t,n,k;
    int sum;
    cin >> t;
    for(int i =0 ; i< t; i ++){
        cin >> n;
        sum = 0;
        for(int j = 0 ; j < n ; j++){
            cin >> k;
            sum += k;
        }
        cout << sum << endl;
    }
}