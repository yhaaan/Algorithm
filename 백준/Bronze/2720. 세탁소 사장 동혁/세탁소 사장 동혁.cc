#include <iostream>
using namespace std;
void cal(int m);
int main() {
    int t,m;
    cin >> t;
    for(int i =0 ; i < t;i++){
        cin >>m;
        cal(m);
    }
    
}

void cal(int m){
    int q=0,d=0,n=0,p=0;
    q = m/25;
    m=m%25;

    d = m/10;
    m= m%10;

    n = m/5;
    m = m%5;

    p = m/1;

    cout << q << ' ' << d << ' '<< n << ' '<< p << '\n';
    
    
    
    
}