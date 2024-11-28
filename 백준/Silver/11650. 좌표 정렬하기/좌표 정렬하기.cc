#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void printv(vector<pair<int,int>>& vec);
int main() {
    int n,a,b;
    vector<pair<int,int>> vec;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a >>b;
        vec.push_back(make_pair(a,b));
    }
    sort(vec.begin(),vec.end(),[](const pair<int,int> &a, const pair<int,int> &b){
        return a.first < b.first || (a.first==b.first && a.second < b.second);
    });
    printv(vec);
    return 0;
}

void printv(vector<pair<int,int>>& vec){
    for (auto name : vec) {
        cout << name.first << " " <<name.second <<"\n";
    }
}