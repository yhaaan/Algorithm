#include <iostream>
#include <string>
using namespace std;

int main() {
    int A,B,C;
    cin >> A >> B >> C;
    string str = to_string(A*B*C);
    for(int i=0;i<10;i++){
        int cnt = 0;
        char ch = '0' + i;
        for(int j=0;j<str.length();j++){
            if(str[j] == ch)
                cnt++;
        }
        cout << cnt << '\n';
    }
    return 0;
}