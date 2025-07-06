#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int arr[30] ={0};

    char maxchar = 'a';
    int maxcount = 0;

    for(int i =0 ; i < str.length(); i++){
        char c = str[i];
        if(c >= 'A' && c <= 'Z'){ //소문자로 통일 
            c = c - 'A' + 'a';
        }
        arr[c-'a'] ++;
        if(arr[c-'a'] > maxcount){
            maxcount = arr[c-'a'];
            maxchar = c -'a' + 'A';
        }
        else if(arr[c-'a'] == maxcount){
            maxchar = '?';
        }
        //cout << c-'a' <<"에 1추가 : " << arr[c-'a'] <<endl;
    }

    cout << maxchar;
}