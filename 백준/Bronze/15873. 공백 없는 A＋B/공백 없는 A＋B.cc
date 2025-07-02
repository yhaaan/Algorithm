#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cin >> str;
    int a,b;
    if(str == "1010"){
        a=10;
        b= 10;
    }
    else if(str[0] == '0'){
        b = stoi(str.substr(1,2));
    }
    else if(str[0] == '1' && str[1] == '0' && str.length() == 3){
        a = 10;
        b = str[2] - '0';
    }
    else if(str.length() == 3){
        a = str[0] - '0';
        b = stoi(str.substr(1,2));
    }
    else{
        a = str[0] - '0';
        b = str[1] - '0';
    }

    cout << a+b;

    
}