#include <iostream>
#include <string>
using namespace std;

void VPS(){
    string str;
    cin >>str;
    int cnt =0;
    for(int i=0;i<str.size();i++){
        if(str[i] == '(')
            cnt++;
        else if(str[i]==')' && cnt >0)
            cnt--;
        else{
            cout << "NO\n";
            return;
        }
    }
    if(cnt == 0){
        cout << "YES\n";
    }
    else
        cout << "NO\n";
}

int main() {
    int n;
    cin >> n;
    for(int i =0;i<n;i++){
        VPS();
    }
    return 0;
}