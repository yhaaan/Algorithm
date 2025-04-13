#include <iostream>
using namespace std;

int main() {
    int n;
    int a,b,k;
    int h;

    while(true){
        cin >> n;
        if( n == -1) return 0;
        k = 0;
        h = 0;
        for(int i = 0 ; i < n ; i ++){    
            cin >> a >> b;
            h += a * (b-k);
            k = b;
        }
        cout << h <<" miles\n";
    }
}