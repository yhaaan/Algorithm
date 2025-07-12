#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int n;
    cin >> n;
    string s;
    int c = 0;
    for(int i =0; i < n ; i++){
        cin >>s;
        if(s.substr(0,5) == str.substr(0,5)) c++;
    }
    cout << c;
}