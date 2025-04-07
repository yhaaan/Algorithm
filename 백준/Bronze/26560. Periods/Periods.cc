#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.get();
    string str;
    for(int i = 0; i  < n ; i++ ){
        getline(cin, str);
        if(str[str.size()-1] != '.'){
            cout << str << "." <<endl;
        }
        else{
            cout << str << endl;
        }
    }
}