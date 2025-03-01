#include <iostream>
using namespace std;
#include <string>
int main() {
    string str;
    cin >> str;
    int res =0 ;
    for(int i = 0 ; i< size(str)-3 ; i++){
        if(str[i] == 'D' && str[i+1] == 'K' && str[i+2] == 'S' && str[i+3] == 'H')
            res ++;
    }
    cout <<res;
}