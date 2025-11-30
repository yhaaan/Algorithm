#include <iostream>
using namespace std;
#include <string>

bool isin(char c,string s1){
    for(int i = 0; i < s1.length(); i++){
        if(s1.find(c) != string::npos){
            //cout << s1 <<" 에서 찾음 : " << c <<endl;
            return true;
        }
    }
    return false;
}

int main() {
    string s1,s2;
    cin >> s1 >> s2;
    for(int i = 0 ; i < s2.length(); i++ ){
        if(isin(s2[i],s1)) continue;
        cout << s2[i] ;
    }
}