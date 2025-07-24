#include <iostream>
using namespace std;

int main() {
    long long x[2];
    long long y[2];
    long long r[2];

    for(int i =0 ; i < 2; i ++){
        cin >> x[i] >> y[i] >> r[i];
    }
    long long dis = (x[0]-x[1])*(x[0]-x[1]) + (y[0]-y[1])*(y[0]-y[1]);
    long long rad = (r[0] + r[1])* (r[0] + r[1]);
    //cout << dis << " " << rad;
    if(dis < rad){
        cout << "YES";
    }
    else cout << "NO";
}