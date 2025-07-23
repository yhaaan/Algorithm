#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    for(int i =0 ; i < n ;i++){
        cin >> str;
        for(int j = 0; j < str.length() ; j++){
            if(str[j] == 'S'){
                cout << str;
                return 0;
            }
        }
    }
}