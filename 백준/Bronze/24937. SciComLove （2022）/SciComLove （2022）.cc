#include <iostream>
using namespace std;
#include <string>

int main() {
    long long n;
    string str = "SciComLove";
    cin >> n;
    n = n%10;
    for(int i = n; i < 10 ; i++){
        cout << str[i];
    }
    for(int i = 0 ; i < n ;i++){
        cout << str[i];
    }
}