#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    string str2;
    cin >> str >> str2;

    if(str.size() >= str2.size()){
        cout << "go";
    }
    else
        cout << "no";
}