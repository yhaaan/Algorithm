#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int n;
    int b =0;
    int score = 0;
    
    cin >> n >> str;
    for(int i = 0 ;i < n; i++){
        if(str[i] == 'X'){
            b = 0;
        }
        else{
            score += i+1 + b;
            b ++;
        }
    }
    cout << score;
    return 0;
}