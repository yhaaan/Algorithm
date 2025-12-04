#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a,b,c;
    float d1,d2,d3;

    cin>> d1>>d2>>d3;

    float sum = (d1+d2+d3)/2;
    a = sum-d3;
    b = sum-d2;
    c = sum-d1;

    if(a <= 0 || b <= 0 || c <= 0) {
        cout << -1;
        return 0;
    }

    cout << fixed << setprecision(1);
    cout << 1 <<endl;
    cout << a <<" " <<b << " " <<c;
    
}