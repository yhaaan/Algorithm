#include <iostream>
using namespace std;

int main() {
    float x,y;
    int n;
    float minp;
    cin >> x >> y;
    minp = x/y;
    cin >> n;
    for(int i = 0; i < n ; i++){
        cin >> x>>y;
        if(minp > x/y){
            minp = x/y;
        }
    }

    cout << minp*1000;
}