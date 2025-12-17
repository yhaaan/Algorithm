#include <iostream>
using namespace std;
#include <string>
#include <sstream> 
#include <cctype> 

bool check(string str) {
    stringstream ss(str);
    string word;
    
    ss >> word;
    char first = tolower(word[0]);

    while (ss >> word) {
        if (tolower(word[0]) != first) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    
    getline(cin,str);
    while(str != "*"){
        if(check(str)) cout << "Y\n";
        else cout << "N\n";

        getline(cin,str);
    }
    
}