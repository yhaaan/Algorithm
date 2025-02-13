#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    for(int i =0 ; i < n ; i++){
        cin >> str;
        transform(str.begin(), str.end(), str.begin(), [](unsigned char c) {return tolower(c); });
        cout << str << '\n';
    }
    return 0;
}