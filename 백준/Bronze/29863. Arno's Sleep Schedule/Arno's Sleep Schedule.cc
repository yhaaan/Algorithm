#include <iostream>
using namespace std;

int main() {
    int a,b;
    cin >> a >> b;
    if(a>b){
        cout << 24 - a + b;
    }
    else{
        cout << b - a;
    }
}