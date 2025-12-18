#include <iostream>
using namespace std;

int check(long long n){
    bool arr[10] = {false,};
    int k = 1;
    long long num;
    string s;

    while(true){
        num = n*k;
        s = to_string(num);
        
        for(int i = 0 ; i < s.length() ; i++){
            arr[s[i]-'0'] = true;
            //cout << s[i]-'0' << " is true :: k :" << k <<endl;
        }
        
        bool flag = true;
        for(int i = 0 ; i < 10 ; i++){
            if(arr[i] == false){
                flag = false;
                k++;
                break;
            }
        }
        if(flag == true) return k;
    }
}

int main() {
    long long n;
    while(cin >> n){
        
        cout << check(n) <<endl;
    }
}