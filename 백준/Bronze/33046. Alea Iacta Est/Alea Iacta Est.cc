#include <iostream>
using namespace std;

int main() {
    int a,b;
    int n = 0;
    for(int i = 0 ; i < 2 ; i++){
        cin >> a>>b;
        n += a+b;
        
    }
    n -=1;
    //cout << n << endl;
    cout << (n-1)%4+1;

    
}