#include <iostream>
using namespace std;

int main() {
    int q;
    cin >> q;
    int x,y;
    int n = 0;
    
    for(int i = 0 ; i < q;  i++){
        cin >> x>>y;
        
        if(x == 1) n += y;
        if(x == 2){
            n -= y;
            if( n < 0){
                cout <<"Adios";
                return 0;
            }
        }
    }
    cout <<"See you next month";
}