#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

int main() {
    int T,N;
    string k,v;
    int ans;
    cin >> T;
    for(int i = 0; i < T; i++){
        cin >> N;
        map<string,int> items;
        for(int j = 0 ; j < N ; j++){
            cin >> v >> k;
            if(items.count(k)){
                items[k] ++;
            }
            else{
                items[k] = 1;     
            }
        }
        ans = 1;
        for(auto it = items.begin(); it != items.end(); ++ it ){
            //cout << it->first << " : " << it->second << endl;
            ans *= (it->second) +1; 
        }
        cout << ans -1 << "\n";
    }

    
}