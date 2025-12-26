#include <iostream>
#include <string>
using namespace std;


int main() {
    int n;
    char c;
    int cnt = 0;
    cin >> n;
    for(int i= 0 ; i < n ; i++){
        cin >> c;
    
        if( c == 'a' || c=='e' || c == 'i' || c== 'o' || c == 'u')
            cnt ++;
    }
    cout << cnt;
}