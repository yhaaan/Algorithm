#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    int cnt = 0;
    bool flag = false;
    getline(cin, name);
    for (int i = 0; i < name.size(); i++) {
        if(name[i]!=' ' && flag == false) {
            cnt++;
            flag = true;
        }
        else if(name[i] == ' ') {
            flag = false;
        }
    }
    cout << cnt << endl;
    return 0;
}