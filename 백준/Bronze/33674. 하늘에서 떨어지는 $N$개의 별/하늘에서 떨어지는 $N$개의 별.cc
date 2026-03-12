#include <iostream>
using namespace std;

int main() {
    int n,d,k;
    cin >> n >> d >> k;
    int m = 0 ;
    for(int i = 0 ; i< n; i++){
        int x;
        cin >> x;
        if(m < x)
            m = x;
    }
    cout << (d-1)/(k/m);
    
    
    
}