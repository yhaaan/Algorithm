#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[3] = {"residential","commercial","industrial"};
    string str;
    int k;
    cin >> str >> k;
    if(str == arr[0]){
        if(k < 2) cout << 0;
        else if(k < 6) cout << 1;
        else if(k < 11) cout << 2;
        else if(k < 16) cout << 3;
        else if(k < 21) cout << 4;
    }
    else if(str == arr[1]){
        if(k < 2) cout << 0;
        else if(k < 8) cout << 1;
        else if(k < 15) cout << 2;
        else if(k < 21) cout << 3;
    }
    else if (str == arr[2]){
        if(k < 2) cout << 0;
        else if(k < 5) cout << 1;
        else if(k < 9) cout << 2;
        else if(k < 13) cout << 3;
        else if(k < 17) cout << 4;
        else if(k < 21) cout << 5;
    }
    
}