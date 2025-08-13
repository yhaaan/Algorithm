#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    for(int i = 0 ; i < 4 ; i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }

    sort(vec.begin(),vec.end());
    int sum = vec[0] + vec[3] - (vec[1] + vec[2]);
    if(sum < 0) sum = sum*-1;
    cout << sum;
}