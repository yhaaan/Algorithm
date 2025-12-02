#include <iostream>
using namespace std;

int main() {
    int a,b,c,x,y;
    cin >> a>>b>>c>>x>>y;

    if(a> 2*c) a = 2*c;
    if(b > 2*c) b = 2*c;

    
    int m = 0 ;
    if(a+b > 2*c) { //반반 이득 
        if(x < y){
            m += (y-x)*b; //20,000,000
            m += x*c*2;  // 90,000,000
        }
        else{
            m += (x-y)*a;  // 2000
            m += y*c*2; // 6400
        }
    }
    else{
        m += x*a + y*b;
    }

    cout << m;
    
}