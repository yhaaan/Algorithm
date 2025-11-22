#include <iostream>
using namespace std;
#include <string>

bool ism(char k){
    if(k == 'a' || k == 'e' || k == 'i' || k == 'o'  || k == 'u' ){
        return true;
    }
    return false;
}

int main() {
    string str;
    cin >> str;
    if( str.length() == 1){
        cout << 1;
        return 0;
    }
    
    int flag = -1;
    int ans = 0;

    if(ism(str[0])) flag = 1;
    else flag = 0;
    for(int i= 1 ; i < str.length(); i++){
        //cout << flag << "  :: " << ism(str[i]) << endl;
        if(flag != ism(str[i])){
            flag = ism(str[i]);
            ans = 1;
        }
        else {
            ans = 0;
            break;
        }
    }

    cout << ans;
}