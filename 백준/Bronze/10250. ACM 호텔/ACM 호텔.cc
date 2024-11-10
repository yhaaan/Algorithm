#include <iostream>
using namespace std;

int main() {
    int T,H,W,N;
    cin >> T;
    for (int i = 0; i < T; i++) {
        cin >> H >> W >> N;
        cout << ((N-1)%H+1)*100 + (N+H-1)/H << endl;
    }
    return 0;
}