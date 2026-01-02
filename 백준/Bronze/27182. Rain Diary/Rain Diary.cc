#include <iostream>
using namespace std;

int main() {
    int n , m;
    cin >> n>>m;
    if(n-7 < 1){
        cout << m + 7;
    }
    else{
        cout << n -7;
    }
}