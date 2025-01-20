#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    cout << &str[n-5];
}