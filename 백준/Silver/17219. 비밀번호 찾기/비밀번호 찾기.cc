#include <iostream>
#include <functional>
#include <string>
using namespace std;

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    unordered_map<string,string> map;
    string k,v;
    int n, m;
    cin >> n >> m;
    for(int i = 0 ; i < n; i++){
        cin >> k >> v;
        map[k] = v;
        
    }
    for(int i =0 ; i < m ; i++){
        cin >> k;
        if(map.find(k) != map.end()){
            cout << map[k] << '\n';
        }
        else{
            cout << "?\n";
        }
    }
}