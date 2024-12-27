#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec;
    int n,t;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> t;
        vec.push_back(t);
    }
    sort(vec.begin(),vec.end());
    
    int sum = 0;
    for(int i = 0; i< n ; i++){
        sum = sum + vec[i]*(n-i);
    }
    cout <<sum;
}