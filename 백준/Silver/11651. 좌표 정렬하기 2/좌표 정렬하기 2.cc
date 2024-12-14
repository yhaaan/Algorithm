#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n,x,y;
    vector<pair<int,int>> vec;
    cin >> n;
    for(int i =0;i<n;i++){
        cin >> x >> y;
        vec.push_back(make_pair(x,y));
    }
    sort(vec.begin(),vec.end(),[](pair<int,int> a, pair<int,int> b){
       return a.second < b.second || (a.second == b.second  && a.first < b.first); 
    });

    for (auto r : vec) {
        cout << r.first <<" "<<r.second <<"\n";
    }
    return 0;
}