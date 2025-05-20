#include <iostream>
using namespace std;

int main() {
    int l,r,a;
    cin >> l >> r >>a;

    int m = 0;
    m = l > r ? 1 : 0;
    for(int i = 0; i < a; i ++){
        if(m == 0){
            l++;
        }
        else if (m == 1){
            r ++;
        }
        m = l > r ? 1 : 0;
    }

    m = l > r ? r : l;
    cout << m*2;
}