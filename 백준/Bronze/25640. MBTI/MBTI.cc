#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    string s;
    int cnt = 0;
    int n;

    cin>>str;
    cin >> n;

    for(int i = 0; i < n ; i++){
        cin >> s;
        if( s== str)
             cnt ++;
    }

    cout <<cnt;
    
}