#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    int cnt = 0;
    string str;
    cin >> n;
    int k;
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        if(stoi(str.substr(2)) <= 90)
            cnt++; 
    }
    cout << cnt;
}