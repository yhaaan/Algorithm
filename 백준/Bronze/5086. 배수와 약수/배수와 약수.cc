#include <iostream>
using namespace std;

int main() {
    int a=1,b=1;

    cin >> a >>b;
    while(a != 0 && b!= 0){
        
        if(b%a == 0) cout << "factor\n";
        else if(a%b == 0) cout << "multiple\n";
        else cout <<"neither\n";
        cin >> a >>b;
        
    }
}