#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string str;
    int k;
    vector<pair<string,int>> vec;
    for(int i = 0 ; i < n ; i ++){
        cin >> str >> k;
        pair<string,int> p = make_pair(str,k);
        vec.emplace_back(p);
    }
sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
        return a.second < b.second; 
    });
    cout << vec[0].first;
}