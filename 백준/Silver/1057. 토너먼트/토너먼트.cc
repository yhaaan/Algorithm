#include <iostream>
using namespace std;

int n;
int a,b;
int cnt = 0;
int main(void){
    cin >> n >> a >>b;
    
    while(a != b){
        a= (a+1)/2;
        b= (b+1)/2;
        cnt ++;
    }

    cout << cnt;
    
}
