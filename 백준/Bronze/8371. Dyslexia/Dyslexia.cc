#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;
    string str,s;
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        cin >> s;
    }
    for(int i = 0 ; i < n ; i++){
        if(str[i] != s[i])
            cnt ++;
    }

    cout << cnt;
}

