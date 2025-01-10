#include <iostream>
using namespace std;

int main() {
    int n, a,d,g;
    int mscr=0;
    int scr;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> a >> d >> g;
        if(d+g == a){
            scr = (d+g) *a*2;
        }
        else
            scr = (d+g) *a;
        if(mscr <= scr)
            mscr = scr;
    }
    cout << mscr;
    return 0;
}