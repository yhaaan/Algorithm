#include <iostream>
#include <cctype>
using namespace std;
#include <string>

void p(int k,string str){
    string ori = str;
    if(k == 1){
        cout << str << endl;
        for(int i = 0; i<str.size(); i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
                cout << '_';
            }
            cout << str[i];
        }
        cout << endl;
        ori[0] = toupper(ori[0]);
        cout << ori;
    }
    else if(k==2){
        for(int i = 0; i<str.size(); i++){
            if(str[i] == '_'){
                str[i+1] = toupper(str[i+1]);
                continue;
            }
            cout << str[i];
        }
        cout << endl;
        cout << ori << endl;
        str[0] = toupper(str[0]);
        for(int i = 0; i<str.size(); i++){
            if(str[i] == '_'){
                str[i+1] = toupper(str[i+1]);
                continue;
            }
            cout << str[i];
        }
    }
    else if(k==3){
        str[0] = tolower(str[0]);
        cout << str <<endl;

        
        for(int i = 0; i<str.size(); i++){
            if(isupper(str[i])){
                str[i] = tolower(str[i]);
                cout << '_';
            }
            cout << str[i];
        }
        cout << endl;
        cout << ori;
    }
}


int main() {
    string str;
    int k;
    cin >> k >> str;    
    p(k,str);
}