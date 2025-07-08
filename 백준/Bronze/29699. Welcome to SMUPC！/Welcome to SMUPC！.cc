#include <iostream>
using namespace std;
#include <string>
int main() {
    int n;
    cin >> n;
    string str = "WelcomeToSMUPC";
    int k = (n-1)%14;
    cout << str[k];
}