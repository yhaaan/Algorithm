#include <iostream>
#include<string>
using namespace std;

int main() {
    string a,b;
    cin >> a>>b;
    long long result = 0;

    for(int i = 0; i < a.length(); i++){
        for(int j=0; j< b.length(); j++){
            int n = (a[i] -'0' )* (b[j] -'0');
            result += n;
        }
    }

    cout << result;

    
}