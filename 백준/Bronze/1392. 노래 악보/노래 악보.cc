#include <iostream>
using namespace std;

int main() {
    int a[101];
    int n,q;
    cin >> n >> q;
    int time;
    for(int i = 0 ; i< n; i++){
        cin >> time;
        if(i > 0){
            a[i] = a[i-1] + time;
        }
        else{
            a[i] = time;
        }
    }

    for(int i = 0 ; i< q; i++){
        cin >> time;
        for(int j = 0 ; j < n; j++){
            if(a[j] > time){
                cout << j+1 << '\n';
                break;
            }
        }
    }
}