#include <iostream>
using namespace std;
#include <string>

void c(char c,int k){
    
    if(k == 1){
        if(c == 'b') cout << 'p';
        if(c == 'q') cout << 'd';
        if(c == 'd') cout << 'q';
        if(c == 'p') cout << 'b';
    }
    if(k==2){
        if(c == 'b') cout << 'd';
        if(c == 'q') cout << 'p';
        if(c == 'd') cout << 'b';
        if(c == 'p') cout << 'q';
    }
}

int main() {
    int n,d;
    string str;
    cin >> n >> d;
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        for(int j = 0 ; j < n ; j++){
            c(str[j],d);
        }
        cout << '\n';
    }
    
}