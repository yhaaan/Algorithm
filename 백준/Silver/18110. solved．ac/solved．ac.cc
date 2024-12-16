#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <numeric>
using namespace std;


int main() {
    vector<int> vec;
    int k,n,sum=0;
    int del; // 절삭할 범위
    cin >> k;
    if(k==0){
        cout << 0;
        return 0;
    }
    del = round(0.15*k);
    for(int i = 0; i < k; i++){
        cin >> n;
        vec.push_back(n);
    }
    sort(vec.begin(),vec.end());
    
    vec.erase(vec.begin(),vec.begin() +del);
    vec.erase(vec.end()-del,vec.end());
    
    sum = accumulate(vec.begin(),vec.end(),0);
    cout << round((float)sum/vec.size());
    return 0;
}