#include<iostream>
#include<string>
using namespace std;

int main(){
    int m[30];
    for(int i = 0;i<30;i++){
        m[i] = 0;
    }
    string str;
    cin >> str;
    for(int i =0;i< str.length(); i++){
        m[str[i]-'a'] ++;
    }
    
    for(int i = 0 ; i < 26 ; i++){
        cout << m[i] <<" ";
    }
}