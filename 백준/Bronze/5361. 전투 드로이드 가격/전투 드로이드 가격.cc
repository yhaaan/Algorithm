#include <iostream>
#include <iomanip>
using namespace std;

void cal();
int main() {
    int n;
    cin >> n;
    for(int i =0; i< n ; i++){
        cal();
    }
}


void cal(){
    int a,b,c,d,e;
    cin >> a >> b >>c >>d >>e;
    float sum = a*350.34 + b*230.9 + c*190.55 + d*125.3 + e*180.9;
    cout << fixed <<setprecision(2) << "$" << sum<<endl ;
}