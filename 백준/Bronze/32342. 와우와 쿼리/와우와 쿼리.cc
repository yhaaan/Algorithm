#include <iostream>
#include <string>
using namespace std;
void printw();
int main() {
    int n;
    cin >> n;
    for(int i= 0; i < n; i++){
        printw();
    }
}

void printw(){
    string str;
    int cnt = 0;
    cin >> str;
    if(size(str) <3){
        cout << 0 <<endl;
        return;
    }
    for(int i =0; i < size(str)-2; i++){
        if(str[i] == 'W' && str[i+1] == 'O'&& str[i+2] == 'W'){
            cnt ++;
        }
    }
    cout << cnt <<endl;
}