#include <iostream>
#include <cmath>
using namespace std;

int reverse(int n);
int main() {
    int a,b;
    cin >> a >> b;
    int ra,rb,result;
    ra = reverse(a);
    rb = reverse(b);
    //cout << ra << " "<< rb;

    result = ra > rb ? ra : rb;
    cout <<result;
}

int reverse(int n){
    int r =0;

    for(int i = 0;i<3;i++){
        r += n%10 * 100 / pow(10,i);
        n = n/10;
    }
    return r;
}