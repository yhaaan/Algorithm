#include <iostream>
using namespace std;

int main() {
    int a,b,c;
    cin >> a>>b;
    while(a != 0 && b != 0){
        if(a<b) c= 2*a - b;
        else c = 2*b -a;
        cout << c <<endl;
        cin >> a >>b;
    }
}