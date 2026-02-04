#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int k = -1;
    int num;
    for(int i = 0; i < n ; i++){
        cin >> num;
        if(k == -1) {
            k = num;
            continue;
        }
        if(num%k == 0){
            cout << num << '\n';
            k = -1;
        }
    }
}