#include <iostream>
using namespace std;
#include <string>

int main() {
    int arr[26];
    int t =0;
    int n;
    string str;
    cin >> n;
    for(int i = 0; i<26;i++){
        arr[i] = 0;
    }
    for(int i = 0; i< n ; i++){
        cin >>str;
        arr[str[0] -'a'] ++;
    }

    for(int i = 0; i<26;i++){
        if(arr[i] > 4){
            cout<< (char)(i+'a');
            t++;
        }
    }

    if(t==0){
        cout << "PREDAJA";
    }
        
}