#include <iostream>
#include <string>
using namespace std;

int main() {
    string start, str;
    int count = 0;
    getline(cin, start);
    getline(cin,str);
    while(str != "고무오리 디버깅 끝"){
        
        if(str == "문제"){
            count ++;
        }
        else if(str == "고무오리"){
            if(count == 0) count +=2;
            else count --;
        }
        else count ++;
        getline(cin,str);
    }

    if( count == 0) cout << "고무오리야 사랑해";
    else cout << "힝구";
}