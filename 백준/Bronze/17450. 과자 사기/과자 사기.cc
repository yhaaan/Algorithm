#include <iostream>
using namespace std;


int main() {
    int s,n,u;
    float g[3];
    float a,b;
    for(int i = 0 ; i < 3; i ++){
        cin >> a >> b;
        if(10*a >= 5000){
            a  = 10*a - 500;
        }
        else{
            a = 10*a;
        }
        
        g[i] = b*10/a;
    }

    if(g[0] >= g[1] && g[0] >= g[2])
        cout << "S";
    else if(g[1] >= g[2] && g[1] >= g[0])
        cout << "N";
    else
        cout << "U";
}