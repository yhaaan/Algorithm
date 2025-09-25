#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin >> a>>b;
    while(true){
        if(a==0 && b==0){
            cout << "AXIS";
            break;
        }
        if(a > 0 && b > 0) cout << "Q1\n";
        if(a > 0 && b < 0) cout << "Q4\n";
        if(a < 0 && b > 0) cout << "Q2\n";
        if(a < 0 && b < 0) cout << "Q3\n";
        if(a == 0 || b == 0) cout << "AXIS\n";
        cin >> a>>b;
    }
}