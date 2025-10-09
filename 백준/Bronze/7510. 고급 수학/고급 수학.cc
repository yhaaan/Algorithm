#include <iostream>
using namespace std;

int cc(int a,int b,int c){
    int m,n1,n2;
    if(a >= b && a >= c){
        m = a;
        n1 = b;
        n2 = c;
    }
    if(b >=a  && b >= c){
        m = b;
        n1 = a;
        n2 = c;
    }
    if(c >= b && c >= a){
        m = c;
        n1 = a;
        n2 = b;
    }

    if(m*m == n1*n1 + n2*n2) return 1;
    else return 0;
}

int main() {
    int n;
    cin >> n;
    int a,b,c;
    for(int i = 0 ; i < n ; i++){
        cin >> a>>b>>c;
        if(cc(a,b,c) == 1){
            cout << "Scenario #"<<i+1<<":\nyes\n\n";
        }
        else{
            cout << "Scenario #"<<i+1<<":\nno\n\n";
        }
    }
}