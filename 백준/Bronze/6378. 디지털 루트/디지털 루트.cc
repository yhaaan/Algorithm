#include <iostream>
using namespace std;
#include <string>

int k(string k){
    int sum = 0;
    for(int i = 0 ; i < k.length(); i++){
    
        sum += k[i] -'0';
    }
    return sum;
}

int main() {
    string n;
    cin >> n;
    while(n != "0"){
        int sum;
        sum = k(n);
        while(sum > 9){
            sum = k(to_string(sum));
        
        }
        cout << sum << '\n';
        cin >> n;
        if(n == "0") break;
    }
}