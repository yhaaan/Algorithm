#include <iostream>
#include <algorithm>
using namespace std;
#include <vector>

int main() {
    int N;
    vector<int> vec;
    cin >> N;
    for(int i =0 ;i<N;i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    sort(vec.begin(), vec.end());
    for (auto name : vec) {
        cout << name<<"\n";
    }
    return 0;
}