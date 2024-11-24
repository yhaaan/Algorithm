#include <iostream>
using namespace std;
int main() {
    int N,M,a,sum=0;
    int cnt = 0;
    cin >> N >> M;
    for(int i = 0; i < N; i++){
        cin >> a;
        sum += a;
        if(sum < 0)
            sum =0;
        if(sum >= M)
            cnt ++;
    }
    cout << cnt;
    return 0;
}