#include <iostream>
using namespace std;
#include <string>

int main() {
    string str;
    int cnt =1;
    cin >> str;
    for(int i = 0 ; i < str.length(); i++){
        if(str[i] == ',') cnt ++;
    }
    cout <<cnt;
}