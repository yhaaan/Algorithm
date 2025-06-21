#include <iostream>
using namespace std;

int n;

int main(void){
    cin >> n;
    int cnt = 0;

    int s,e;
    int sum = 0;

    s = 1;
    e = 1;
    sum = 1;

    while(e <= n){
        if(sum == n) cnt ++;  
        if(sum >= n){
            sum = sum - s;
            s++;
        }
        if(sum < n){
            e++;
            sum = sum + e; 
        }
    }

    cout <<cnt;

    
}
