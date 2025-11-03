#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
    vector<int> v;
    for(int i =0; i < 5 ; i ++){
        int k;
        cin >> k;
        v.push_back(k);
    }

    sort(v.begin(), v.end());

    int c = 0;

    if(v[4] < (v[3]+v[2])) c++;
    if(v[4] < (v[3]+v[1])) c++;
    if(v[4] < (v[3]+v[0])) c++;
    if(v[4] < (v[2]+v[1])) c++;
    if(v[4] < (v[2]+v[0])) c++;
    if(v[4] < (v[1]+v[0])) c++;

    if(v[3] < v[2]+v[1]) c++;
    if(v[3] < v[2]+v[0]) c++;
    if(v[3] < v[1]+v[0]) c++;
    if(v[2] < v[1]+v[0]) c++;
    
    cout << c;
    
    
    
    
    
    
    
    
}