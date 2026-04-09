#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int len = str.length();
    if (len < 3 || str[0] != '\"' || str[len - 1] != '\"') {
        cout << "CE";
    } 
    else {
        string content = str.substr(1, len - 2);
        if (content.empty()) {
            cout << "CE";
        } else {
            cout << content;
        }
    }
}