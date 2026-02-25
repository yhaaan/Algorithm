#include <iostream>
using namespace std;

int main() {
    int n,k;
    int a,b;
    int oa;
    int sa=0,sb=0;
    int winner = 0;
    cin >> n >> k;
    for(int i= 0 ; i < n; i++){
        cin >> a >> b;
        oa = sa + a*1.5f;
        sa += a;
        sb += b;
        if(k <= oa && k > sb ||
            k <= sa && k <= sb ||
            k > sa && k > sb && sa >= sb+50 ||
            k > oa && k > sb && oa >= sb + 50){
            winner = 1;
            break;
        }
        else if(k > sa && k <= sb){
            winner = -1;
            break;
        }
    }

    cout << winner;
}