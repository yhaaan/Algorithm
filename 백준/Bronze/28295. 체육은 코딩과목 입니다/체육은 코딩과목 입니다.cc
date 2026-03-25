#include <iostream>
using namespace std;

int ang = 0;

int main() {
    int k;
    for(int i =0 ; i< 10 ; i++){
        cin >> k;
        if(k == 1) ang += 90;
        if(k == 2) ang += 180;
        if(k == 3) ang -= 90;
        //cout << ang << endl;
    }
    
    ang = ang % 360;
    if(ang == 0) cout << 'N';
    if(ang == 90 || ang == -270) cout << 'E';
    if(ang == 180 || ang == -180) cout << 'S';
    if(ang == 270 || ang == -90) cout << 'W';
    
    
    
}