#include <iostream>
using namespace std;

int main() {
    int n,a,x,b;
    cin >>n;
    for(int i = 0 ; i < n ; i++){
        cin >> a>>b>>x;
        cout << (x-1)*a+b << "\n";
    }
}