#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int size = str.length();
    cout <<'h';
    for(int i =0; i < (size -2)*2;i++){
        cout << 'e';
    }
    cout << 'y';
}