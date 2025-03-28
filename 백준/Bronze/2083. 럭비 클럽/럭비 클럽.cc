#include <iostream>
using namespace std;
#include <string>
int main() {
    string str;
    int age, w;

    while(true){
        cin >> str >> age >> w;
        if(str == "#")
            break;
        if(age > 17 || w >= 80){
            cout << str << " " <<"Senior\n";
        }
        else{
            cout << str << " " << "Junior\n";
        }
    }
}