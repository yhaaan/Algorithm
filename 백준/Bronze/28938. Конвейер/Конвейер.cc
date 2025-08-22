#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int sum  =0;
    for(int i =0;i<n;i++){
        int k;
        cin >> k;
        sum += k;
    }

    if(sum < 0) cout << "Left";
    if(sum == 0) cout << "Stay";
    if(sum >0) cout << "Right";
}