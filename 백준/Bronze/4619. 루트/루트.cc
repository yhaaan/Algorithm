#include <iostream>
#include <cmath>
using namespace std;

int num(int k,int n);

int main() {
    int a,b,n;
    int minr;
    int mind;
    int r;


    while(true){
        cin >> b >> n;
        if(b == 0 && n ==0){
            break;
        }
        mind = 1000000;
        for(int i = 0 ; i <= b; i++){
            r = num(i,n);
            if(abs(r-b) <= mind){
                mind = abs(r-b);
                minr = i;
            }
            else{
                break;
            }
        }
        cout << minr << "\n";
    }
}


int num(int k,int n){
    int result = 1;
    for(int i = 0; i < n ; i++){
        result = result * k;
    }
    return result;
}