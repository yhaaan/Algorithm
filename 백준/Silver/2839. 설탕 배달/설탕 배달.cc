#include <iostream>
using namespace std;
int cal(int n){
    int f=0,t=0,i,rn,tm;
    int five,min = -1;
    five = n/5;
    for(int i = five; i>= 0; i--){

        rn = n - 5*i;
        if(rn==0){
            min = i;
            break;
        }
        if(rn% 3 ==0){
            min = i+rn/3;
            break;
        }
    }
    return min;
}
int main() {
    int N;
    cin >> N;
    cout << cal(N);
    
    return 0;
}