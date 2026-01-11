#include <iostream>
using namespace std;

int main() {
    int m;
    int k[1001];
    k[0] = 1; // 처음꺼가 1번 돌떄 
    int a,b,c;
    cin >> m;
    for(int i = 0; i < m ; i++){
        cin >> a>>b>>c;
        int t = 1;
        if(c == 0) t = 1;
        else t = -1;
        k[i+1] = k[i] * b/a * t;
    }

    if(k[m] < 0){
        cout << 1 <<" " <<k[m]*-1;
    }
    else{
        cout << 0 <<" " <<k[m];
    }
    /*
    for(int i = 0 ; i <= m;i ++){
        cout << k[i] <<" ";
    }
    */
}