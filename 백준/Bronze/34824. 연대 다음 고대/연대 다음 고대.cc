#include <iostream>
#include <string>
using namespace std;

int main() {
    int n ;
    cin >> n;
    
    string str,ans;
    ans = "NULL";
    for(int i = 0 ; i < n ; i++){
        cin >> str;
        if(str == "yonsei" && ans == "NULL"){
            ans = "Yonsei Won!";
        }

        if(str == "korea" && ans == "NULL"){
            ans = "Yonsei Lost...";
        }
    }
    cout<<ans;
    
    
}