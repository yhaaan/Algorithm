#include <iostream>
using namespace std;




int main() {
    int n;
    int k;
    int  f = 0;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> k;
        if ( k%2 == 0) f++;
        else f --;
    }

    if(f > 0) cout << "Happy";
    else cout << "Sad";
}