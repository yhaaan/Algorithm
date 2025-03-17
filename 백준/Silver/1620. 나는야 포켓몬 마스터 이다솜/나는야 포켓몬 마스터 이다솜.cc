#include <iostream>
#include <functional>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<int,string> map1;
    unordered_map<string,int> map2;
    string str;
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < n; i++){
        cin >> str;
        map1[i+1] = str;
        map2[str] = i+1;
    }

    
    for(int i =0 ; i < m ; i++){
        cin >> str;
        if(map2.find(str) != map2.end()){
            cout << map2[str] << '\n';
        }
        else{
            cout << map1[stoi(str)] << '\n';
        }
    }
}