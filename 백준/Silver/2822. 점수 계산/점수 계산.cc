#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    vector<pair<int,int>> vec;
    for(int i = 1; i <= 8; i++){
        cin >> n;
        vec.push_back(make_pair(i, n));
    }

    sort(vec.begin(), vec.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.second > b.second;
    });

    sort(vec.begin(), vec.begin()+5, [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int sum =0;
    for (int i = 0; i < 5; i++) {
        sum += vec.at(i).second;
    }
    cout << sum <<endl;
    for (int i = 0; i < 5; i++) {
        cout << vec.at(i).first << " ";
    }
    
}