#include <iostream>
using namespace std;
#include<string>
#include <algorithm>

int main() {
    string str;
    while(getline(cin,str)){
        string lower_str = str;
        transform(lower_str.begin(), lower_str.end(), lower_str.begin(), ::tolower);
        if(lower_str.find("problem") != string::npos) cout << "yes";
        else cout << "no";
        cout<<"\n";
    }
}