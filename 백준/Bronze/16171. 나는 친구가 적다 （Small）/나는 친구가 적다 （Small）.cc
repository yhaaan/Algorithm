#include <iostream>
#include <string>
using namespace std;

int main() {
    string s, k;
    cin >> s;
    cin >> k;
    int ans = 0;

    int i = 0;
    int j = 0;

    while (i < s.length()) {
        if (s[i] >= '0' && s[i] <= '9') 
        {
            i++;
        } 
        else if (j < k.length() && s[i] == k[j]) 
        {
            i++;
            j++;
        }
        else 
        {
            if (j == 0) {
                i++;
            } 
            else {
                i = i - j + 1; 
                j = 0;         
            }
        }
        if (j == k.length()) {
            ans = 1;
            break;
        }
    }
    cout << ans;
    return 0;
}