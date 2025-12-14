#include <iostream>
using namespace std;
#include<string>

int main() {
    string str;
    getline(cin, str);

    size_t pos = str.find('(');

    if (pos != string::npos) {
        cout << str.substr(0, pos-1) << endl;
        cout << str.substr(pos+1,str.length()-pos-2);
    }
    else {
        cout << str << endl << '-';
    }
}