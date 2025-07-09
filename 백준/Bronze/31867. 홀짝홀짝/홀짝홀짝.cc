#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string num;
    cin >> n;
    cin >> num;
    int odd = 0;
    for(int i =0;i < n; i++){
        if(num[i]%2 == 1)
            odd ++;
    }
    if(odd > n-odd){
        cout << 1;
    }
    else if(odd < n-odd){
        cout << 0;
    }
    else
        cout << -1;

    
}