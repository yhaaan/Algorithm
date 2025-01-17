#include <iostream>
using namespace std;

int main() {
    char n;
    int win = 0;
    for(int i =0 ; i < 6;i++){
        cin >> n;
        if(n == 'W')
            win++;
    }

    if(win > 4){
        cout << 1;
    }
    else if(win > 2){
        cout << 2;
    }
    else if(win > 0){
        cout << 3;
    }
    else
        cout << -1;
}