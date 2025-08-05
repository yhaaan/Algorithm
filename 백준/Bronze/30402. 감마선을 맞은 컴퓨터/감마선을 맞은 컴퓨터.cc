#include <iostream>
#include <string>
using namespace std;


char c[15][30];
int main() {
    string str[3] = {"chunbae","nabi","yeongcheol"};
    int idx = 0;
    for(int i = 0; i< 15; i++){
        for(int j = 0 ; j < 15; j++){
            cin >> c[i][j];
            if(c[i][j] == 'w') idx = 0;
            if(c[i][j] == 'b') idx = 1;
            if(c[i][j] == 'g') idx = 2;
        }
    }
    cout << str[idx];
}