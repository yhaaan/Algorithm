#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int m = 0,k;
    for(int i = 0 ; i < n ; i++){
        m = 0;
        for(int j = 0; j < 5; j++){
            cin >>k;
            if(k > m)
                m = k;
        }
        cout << "Case #" <<i+1 <<": "<<m << "\n";
    }
}