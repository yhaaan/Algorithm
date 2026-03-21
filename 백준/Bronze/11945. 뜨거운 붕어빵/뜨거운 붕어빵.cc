#include <iostream>
#include <string>
using namespace std;

void r(string str){
    for(int i = str.length()-1; i >= 0 ; i--){
        cout << str[i];
    }
    cout << '\n';
}

int main() {
    int n,m;
    string str;
    cin >> n >> m;
    for(int i = 0; i < n ; i++){
        cin >> str;
        r(str);
    }
}