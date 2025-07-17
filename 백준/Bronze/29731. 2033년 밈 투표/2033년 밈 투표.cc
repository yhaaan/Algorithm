#include <iostream>
#include <string>
using namespace std;

int main() {
    string str[7] = {
        "Never gonna give you up",
        "Never gonna let you down",
        "Never gonna run around and desert you",
        "Never gonna make you cry",
        "Never gonna say goodbye",
        "Never gonna tell a lie and hurt you",
        "Never gonna stop"
    };


    int n;
    string s;
    bool flag = false;
    
    cin >> n;
    cin.ignore();
    for(int i =0 ; i < n ; i++){
        getline(cin, s);

        bool found = false;
        for(int j =0 ; j < 7; j++){
            if(str[j] == s){
                found = true;
                break;
            }
        }
        if(!found) flag = true;
    }
    if(flag) cout << "Yes";
    else cout << "No";

}