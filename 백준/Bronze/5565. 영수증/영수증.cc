#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int a[10];
    int total;
    cin >> total;
    for(int i= 0; i < 10; i++){
        cin >>a[i];
        sum += a[i];
    }

    cout << total - sum;
    
    
}