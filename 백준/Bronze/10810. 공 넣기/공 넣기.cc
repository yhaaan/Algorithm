#include <iostream>
using namespace std;
int main() {
    int N,M;
    int arr[101] = {0};
    int s,e,c;//start , end , count
    cin >> N >> M;
    for(int i = 0 ; i<M;i++){
        cin >> s >> e >> c;
        for(int j = s; j<=e;j++){
            arr[j] = c;
        }
    }
    for(int i = 1; i<=N;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}