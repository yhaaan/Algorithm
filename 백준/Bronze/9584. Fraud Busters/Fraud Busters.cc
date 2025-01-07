#include <iostream>
#include <string>
#include <vector>
using namespace std;
bool check(string cord, string str);
int main() {
    string cord;
    string str;
    vector<string> vec;
    int n;
    int cnt = 0;
    cin >> cord;
    cin >> n;
    for(int i =0; i<n; i++){
        cin >> str;
        vec.push_back(str);
    }

    for(int i =0;i<n;i++) cnt += check(cord,vec[i]);
    cout << cnt << endl;

    for(int i =0; i<n;i++){
        if(check(cord,vec[i]))
            cout << vec[i] <<endl;
    }
    

    
    return 0;
}

bool check(string cord, string str){
    bool pass = true;
    for(int i=0;i<str.size();i++){
        if(str[i] != cord[i] && cord[i] != '*'){
            pass = false;
        }
    }
    return pass;
}


