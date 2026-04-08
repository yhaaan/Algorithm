#include <iostream>
#include <string>
using namespace std;

int al[26] = {0,};

void init(){
    for(int i = 0; i < 26; i++){
        al[i] = 0;
    }
    
}
int main() {
    string str;
    int sum = 0;
    for(int i = 0 ; i < 26; i++){
        sum += 'A'+i;
    }
    
    int ans = 0;
    int n;
    cin >> n;
    for(int i = 0; i < n ; i++){
        init();
        ans = sum;
        
        cin >> str;
        
        for(int j = 0 ; j < str.length(); j++){
            if(al[str[j]-'A'] == 1) continue;
            ans -= str[j];
            al[str[j]-'A'] = 1;
        }
        cout << ans << '\n';
    }
}

