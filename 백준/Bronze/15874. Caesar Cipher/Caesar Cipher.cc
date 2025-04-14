#include <iostream>
#include <string>
using namespace std;
void inc(char c,int k);
int main() {
    int k,s;
    string str;
    cin >> k >> s;
    getchar();
    getline(cin,str);
    for(int i = 0 ;i < s; i++){
        inc(str[i],k);
    }
}

void inc(char c,int k){
    if(c >= 'a' && c <= 'z'){
        //char r = c+k;
        char r = (c - 'a' + k) % 26 + 'a';
        cout << r;
    }
    else if(c >= 'A' && c <= 'Z'){
        //char r = c+k;
        char r = (c - 'A' + k) % 26 + 'A';
        cout << r;
    }
    else{
        cout << c;
    }
    
}