#include <iostream>
#include <vector>
using namespace std;


int N,M;
int i,j;

int main() {
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    cin >> N >> M;
    vector<int> vec(N);
    vector<int> sum(N+1);
    
    //input
    for(int k=0;k<N;k++){
        cin >> vec[k];
        sum[k+1] = sum[k] + vec[k];
    }

    for(int k = 0; k < M ; k++){
        cin >> i >> j;
        cout << sum[j] - sum[i-1] << "\n";
    }
}

