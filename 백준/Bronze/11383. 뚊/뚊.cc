#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int n,m;
    string str;
    vector<string> vec;
    cin >> n >> m;
    for(int i =0;i< n ;i++){
        cin >> str;
        vec.push_back(str);
    }

    bool e = true;
    for(int i = 0; i < n; i++){
        cin >> str;
        string dstr(m*2,' ');
        for(int j = 0; j < m; j++){
            dstr[j*2] = vec[i][j];
            dstr[j*2+1] = vec[i][j];
        }
        if(str != dstr ){
            e = false;
        }
    }

    if(e) cout << "Eyfa";
    else cout << "Not Eyfa";
}