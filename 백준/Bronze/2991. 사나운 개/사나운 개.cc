#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    int p[3];
    cin >> a>>b>>c>>d;
    cin >>p[0]>>p[1]>>p[2];

    for(int i = 0 ; i < 3;i++){
        int cnt =0;
        if((p[i]-1)%(a+b)+1 <= a ){
            cnt++;
        }
        if((p[i]-1)%(c+d)+1 <= c){
            cnt ++;
        }
        cout << cnt << endl;
    }
}