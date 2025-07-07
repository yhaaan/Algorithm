#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    int t =0;
    int l = 0;

    for(int i =0 ; i < 9; i++){
        cin >> str;
        if(str == "Lion"){
            l ++;
        }
        else {
            t ++;
        }
    }

    if( l > t){
        cout << "Lion";
    }else
        cout << "Tiger";
}