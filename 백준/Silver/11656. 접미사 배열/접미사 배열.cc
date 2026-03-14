#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string str;
    vector<string> vec;
    cin >> str;
    for(int i = 0 ; i < str.length(); i++){
        vec.push_back(str.substr(i));
    }

    sort(vec.begin(), vec.end());
    for(int i = 0 ; i < str.length() ; i++){
        cout << vec[i] <<"\n";
    }
}