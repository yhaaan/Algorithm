#include <iostream>
using namespace std;

int main() {
    int ms = 0;
    int score,maxn,sum;
    
    for(int i = 1 ; i <= 5 ; i++){
        sum = 0;
        for(int j = 0; j< 4; j++){
            cin >> score;
            sum += score;
        }
        if(sum > ms){
            maxn = i;
            ms = sum;
        }
    }
    cout << maxn<<" " << ms;
}