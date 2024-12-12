#include <iostream>
#include <vector>
using namespace std;

void bal(string &str){
    vector<char> vec;
    bool res = true;
    for(int i =0;i<str.size();i++){
        if(str[i] == '(') vec.push_back('(');
        else if(str[i] == '[') vec.push_back('[');
        else if (str[i] == ')'){
            if(vec.empty() || vec.back() != '('){
                res = false;
                break;
            }
            else vec.pop_back();
        }
        else if (str[i] == ']'){
            if(vec.empty() || vec.back() != '['){
                res = false;
                break;
            }
            else vec.pop_back();
        }
    }
    if(res == false || !vec.empty()){
        cout << "no\n";
        return;
    }
    cout << "yes\n";
    
}

int main() {
    string str;
    while(1){
        getline(cin,str);
        if(str == ".")
            break;
        bal(str);
    }
    return 0;
}