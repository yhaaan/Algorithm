#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n,m;
    cin >> n;
    vector<int> vec;
    for(int i =0;i< n ; i++){
        int k;
        cin >> k;
        vec.push_back(k);
    }
    int sum =0;
    cin >> m;
    for(int i = 0;i< m;i++){
        int k;
        cin >> k;
        sum += vec.at(k-1);
    }
    cout << sum;
}