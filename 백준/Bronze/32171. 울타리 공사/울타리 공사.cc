#include <iostream>
using namespace std;

int main() {
    int x1 = 99,x2 = -99;
    int y1 = 99,y2 = -99;
    int n;
    int a,b,c,d;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> a>>b>>c>>d;
        if(x1 > a) x1 = a;
        if(x2 < c) x2 = c;
        if(y1 > b) y1 = b;
        if(y2 < d) y2 = d;
        //cout << "cal : " << y2 << " - "<<y1 <<" + " << x2 << " - " << x1 <<endl;
        cout << ((y2-y1)+(x2-x1))*2 << '\n'; 
    }
}