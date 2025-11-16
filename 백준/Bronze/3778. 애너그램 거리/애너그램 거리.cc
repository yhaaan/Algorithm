#include <iostream>
using namespace std;
#include <limits>
#include <string>

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    string a,b;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i = 0 ; i < n ; i++){
        getline(cin, a);
        getline(cin, b);
        int arr[27] = {0,};
        int cnt = 0;
        for(int i = 0 ; i < a.length() ; i ++){
            arr[a[i] - 'a'] ++;
        }
        for(int i = 0 ; i < b.length() ; i ++){
            arr[b[i] - 'a'] --;
            
        }

        for(int i = 0 ; i < 27; i ++){
            if(arr[i] != 0){
                cnt += abs(arr[i]);
            }
        }
        cout << "Case #" <<i+1<<": "<<cnt<<'\n';
    }
}