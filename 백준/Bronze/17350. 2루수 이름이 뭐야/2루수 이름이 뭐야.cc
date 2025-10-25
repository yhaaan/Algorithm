#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string ans = "뭐야?";
    string str;
    cin >>n;
    for(int i =0 ; i < n ; i++){
        cin >> str;
        
        if(str.compare("anj") == 0)
            ans = "뭐야;";
    }
    cout << ans;
}