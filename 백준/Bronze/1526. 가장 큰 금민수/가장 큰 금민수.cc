#include <iostream>
using namespace std;
bool result(int n);
int main() {
    int n;
    cin >> n;
    for(int i = n ; i > 0 ; i--){
        if(result(i)){
            cout << i;
            return 0;
        }
    }
}

bool result(int n){
    while(n >0){
        if(n%10 == 4 || n%10 == 7){
            n = n/10;
        }else{
            return false;
        }
    }
    return true;
}