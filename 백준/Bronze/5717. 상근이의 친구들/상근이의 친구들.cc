#include <iostream>
using namespace std;

int main() {
    int n, m;
    while(true){
        cin >> n >> m ;
        if(n == 0 && m == 0){
            return 0;
        }
        cout << n + m << endl;
    }
}