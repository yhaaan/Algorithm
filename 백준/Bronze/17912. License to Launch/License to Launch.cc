#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin >> n;

    int num;
    int k = 100000000;
    int idx = -1;
    for(int i = 0 ; i < n ; i ++){
        cin >> num;
        if(num < k){
            k = num;
            idx = i;
        }
    }
    cout << idx;
}