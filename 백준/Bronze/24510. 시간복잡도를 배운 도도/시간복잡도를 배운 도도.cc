#include <iostream>
#include <string>
using namespace std;

int c(string str){
    char f[3] = {'f','o','r'};
    char w[5] = {'w','h','i','l','e'};
    int fs=0,ws=0;
    int cnt = 0;
    for(int i = 0 ; i < str.length() ; i++){
        if(str[i] == f[fs]){
            fs ++;
            if(fs == 3) {
                //cout << str[i] << " " << i << endl ;
                cnt ++;
                fs = 0;
            }
        }
        else if(str[i] == f[0]){
                fs = 0;
                fs ++;
            }
        else fs = 0;
        
        if(str[i] == w[ws]){
            ws ++;
            if(ws == 5) {
                cnt ++;
                ws = 0;
            }
        }
        else if(str[i] == w[0]){
                ws = 0;
                ws ++;
            }
        else ws = 0;
        
    }
    return cnt;
}

int main() {
    string str;
    int n;
    int m = 0;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> str;
        int k = c(str);
        if(k > m){
            m = k; 
        }
    }
    cout << m;
}