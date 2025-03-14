#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;


    int ok = 1;

    if(str.size() > 2){
        for(int i = 0; i< str.size() -2 ; i++){
            if((str[i] - str[i+1]) != (str[i+1] - str[i+2])){
                ok = 0;
            }
        }
    }
    if(ok == 1){
        cout << "◝(⑅•ᴗ•⑅)◜..°♡ 뀌요미!!";
        
    }else{
        cout << "흥칫뿡!! <(￣ ﹌ ￣)>";
    }
}