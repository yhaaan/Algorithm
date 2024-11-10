#include <iostream>
#include <string>
using namespace std;

void isPelindrome(string s);
int main() {
    int n;
    while (1)
    {
        cin >> n;
        if (n == 0)
            break;
        isPelindrome(to_string(n));
    }
}

void isPelindrome(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!=s[s.length()-1-i]){
            cout<<"no"<<endl;
            return;
        }
    }
    cout<<"yes"<<endl;
}


