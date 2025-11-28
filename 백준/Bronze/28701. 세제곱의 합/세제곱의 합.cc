#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int s = 0 ;
    int s2 = 0;
    for(int i = 1 ; i <= n ; i++){
        s+= i;
        s2 += i*i*i;
    }

    cout << s << endl << s*s << endl << s2 ;
}