#include <iostream>
using namespace std;

int main() {
    int n;
    int a,b;
    int in,out;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        cin >> a>>b;
        if(b>a){
            if(b-a < 22) cout << "Inner circle line\n";
            else cout << "Outer circle line\n";
        }
        else{
            if(a-b < 22) cout << "Outer circle line\n";
            else cout << "Inner circle line\n";
        }
        
    }
    
}