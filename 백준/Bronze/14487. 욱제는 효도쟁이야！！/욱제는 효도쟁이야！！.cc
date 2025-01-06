#include <iostream>

using namespace std;

int main() {
    int n,dis;
    int maxn = 0;
    int sum = 0;
    cin >> n;
    for(int i =0; i< n;i++){
        cin >> dis;
        maxn = maxn < dis ? dis : maxn;
        sum += dis;
    }
    cout << sum - maxn;
    
}