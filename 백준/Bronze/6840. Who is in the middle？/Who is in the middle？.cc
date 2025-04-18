#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b>>c;
    if(a>b&& b>c || c>b && b>a){
        cout << b;
    }
    else if(a>c && c>b || b>c && c>a){

        cout << c;
    }
    else
        cout <<a;
}