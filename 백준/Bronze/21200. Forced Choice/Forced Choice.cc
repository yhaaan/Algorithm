#include <iostream>
using namespace std;

int main() {
    int n,p,s;
    int k,num;
    cin >> n >> p >> s;
    for(int i = 0; i< s; i++){
        cin >> k;
        bool f = false;
        for(int j = 0 ; j < k ; j++){
            cin >> num;
            if(num == p) f = true;
        }
        
        if(f) cout << "KEEP\n";
        else cout << "REMOVE\n";
    }
}