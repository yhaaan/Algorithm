#include <iostream>
using namespace std;


void g(int n,int t){
    for(int i = 0; i < n; i ++){
        for(int j = 0 ; j < n ; j ++){
            if(t == 0 ) cout << "@@@@@";
            if(t == 1) cout <<"@";
        }
        cout << "\n";
    }
}

int main() {
    int n;
    cin >> n;
    g(n,0);
    g(n,1);
    g(n,0);
    g(n,1);
    g(n,0);
    
}
