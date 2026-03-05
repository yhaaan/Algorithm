#include <iostream>
using namespace std;

int main() {
    float a,b;
    int c;
    cin >> a>>b>>c;
    float l =  a*3.14159;
    //cout << l <<  " " << l/c <<endl;
    if(l/c >= b) cout << "YES";
    else cout << "NO";
}