#include <iostream>
#include <string>
#include <vector>
using namespace std;

string str;
vector<int> num;
vector<char> sign;

void CheckNum(string s) {
    string temp = "";
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '+' || s[i] == '-') {
            num.push_back(stoi(temp));
            sign.push_back(s[i]);
            temp = "";
        } else {
            temp += s[i];
        }
    }
    num.push_back(stoi(temp));
}

int main(void){
    cin >> str;
    CheckNum(str);

    int result = num[0];
    int temp = 1;
    for(int i = 0; i < num.size()-1; i++){
        if(sign[i] == '+'){
            result += num[i+1]*temp;
        }
        if(sign[i] == '-'){
            temp = -1;
            result += num[i+1]*temp;
        }
    }
    cout << result;
}



