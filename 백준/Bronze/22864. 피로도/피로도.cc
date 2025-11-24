#include <iostream>
using namespace std;


int a,b,c,m;
int p = 0;
int r = 0;


void work(){
    p += a;
    r += b;
}

void rest(){
    p -= c;
    if(p < 0 ) p = 0;
}

int main() {
    
    cin >> a>>b>>c>>m;

    for(int i = 0 ; i < 24; i ++){
        if(p + a <= m){
            work();
            //cout << "[Work] " << p <<" "<< r <<endl;
        }
        else {
            rest();
            //cout << "[Rest] " << p <<" "<< r <<endl;
        }
    }
    cout << r;
    
}