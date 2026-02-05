#include<iostream>
using namespace std;

int main(){
    char r[14] = {'r','s','e','f','a','q','t','d','w','c','z','x','v','g'};
    int n;
    cin >> n;
    char c;
    for(int i = 0 ; i < n ; i++){
        cin >> c;
    }
    bool found = false;
    for(int i = 0; i < 14; i++) {
        if(r[i] == c) {
            found = true;
            break;
        }
    }        
    if(found) cout << 1;
    else cout << 0;
}