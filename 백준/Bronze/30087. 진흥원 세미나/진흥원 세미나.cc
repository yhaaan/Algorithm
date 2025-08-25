#include <iostream>

#include <string>
using namespace std;

void sd(string str){
    if(str == "Algorithm") cout << 204 << endl;
    if(str == "DataAnalysis") cout << 207 << endl;
    if(str == "ArtificialIntelligence") cout << 302 << endl;
    if(str == "CyberSecurity") cout << "B101" << endl;
    if(str == "Network") cout << 303 << endl;
    if(str == "Startup") cout << 501 << endl;
    if(str == "TestStrategy") cout << 105 << endl;
    
}

int main() {
    int n;
    string str;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        sd(str);
    }
}