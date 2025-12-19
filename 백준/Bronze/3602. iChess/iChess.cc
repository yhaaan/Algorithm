#include <iostream>
using namespace std;

int main() {
    int b,w;
    cin >> b>>w;
    if(b == 0 && w  == 0){
        cout << "Impossible";
        return 0;
    }

    int mn = min(b,w);
    int mx = max(b,w);
    int ans = 0;

    for(int i = 1 ; i < 200; i++){
        int nmn = (i*i)/2;
        int nmx = (i*i) - nmn;

        if(mn >= nmn && mx >= nmx) ans = i;
        else break;
    }
    cout <<ans;
}