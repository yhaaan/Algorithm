#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main() {
    int N,M;
    int sum = 0;
    cin >> N >> M;
    vector<int> a;
    for(int i=0;i<N;i++){
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    sort(a.begin(),a.end());
    
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            for(int k=j+1;k<N;k++){
                if(a[i]+a[j]+a[k]<=M){
                    sum = max(sum,a[i]+a[j]+a[k]);
                }
            }
        }
    }
    cout << sum << endl;
    
}

