#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    int h = 0,k;
    string str;
    vector<string> vec;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> str >> k;
        if(k == h){
            vec.push_back(str);
        }
        else if(k > h){
            h = k;
            vec.clear();
            vec.push_back(str);
        }
    }

    
    if(vec.size() == 1) {
        cout << vec[0];
        return 0;
    }
    string ans;
    ans = vec[0];
    for(int i = 0 ; i < vec.size(); i++){
        if(vec[i] < ans){
            ans = vec[i];
        }
    }
    cout << ans;
    
    
} 