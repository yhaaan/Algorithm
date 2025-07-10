#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    for(int i =0; i<str.length() ; i ++){
        if(str[i] == 'l')
            cout << "L";
        if(str[i] == 'I')
            cout << "i";
    }
}