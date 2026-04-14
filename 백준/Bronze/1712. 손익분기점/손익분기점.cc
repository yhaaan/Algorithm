#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b>>c;
    if(b==c){
        cout << -1;
        return 0;
    }
    double k = -a/(double)(b-c);
    if(k <= 0) cout << -1;
    else {
        int kk = floor(k) +1;
        cout << kk;
    }
}